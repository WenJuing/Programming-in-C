#include <stdio.h>
#include <windows.h>
#define N 10
// 输入10个学生信息（学号、姓名、3门课成绩），输出3门课总平均分，以及最高分学生的信息
typedef struct Student {
    int num;
    char name[20];
    float score[3];
    float aver;
} Student;

void input(Student stu[]);          // 输入学生数据
void show_stu(Student stu[]);       // 输出学生数据
void show_aver(Student stu[]);      // 输出3门课平均分
void show_highest(Student stu[]);   // 输出含最高成绩的学生的数据
int main()
{
    Student stu[N];
    input(stu);
    show_stu(stu);
    show_aver(stu);
    show_highest(stu);
    system("pause");
    return 0;
}

void input(Student stu[])
{
    printf("输入%d位学生的信息：包括学号、姓名、三门课的分数\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f",
        &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}
void show_stu(Student stu[])
{
    printf("\nNo. Name       ke_1   ke_2   ke_3\n");
    for (int i = 0; i < N; i++)
    {
        printf("%-3d %-10s %6.2f %6.2f %6.2f\n", 
        stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    printf("\n");
}
void show_aver(Student stu[])
{
    float aver = 0;
    for (int i = 0; i < N; i++)
    {
        aver += (stu[i].aver / N);
    }
    printf("课程总平均分：%.2f\n", aver);
}
void show_highest(Student stu[])
{
    int max_stu = 0, max_sco = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (stu[i].score[j] > stu[max_stu].score[max_sco])
            {
                max_stu = i;
                max_sco = j;
            }
        }
    }
    printf("【最高分学生的数据】\n");
    printf("学号：%d\n", stu[max_stu].num);
    printf("姓名：%s\n", stu[max_stu].name);
    printf("3门课成绩：%6.2f %6.2f %6.2f\n", 
    stu[max_stu].score[0], stu[max_stu].score[1], stu[max_stu].score[2]);
    printf("平均成绩：%6.2f\n", stu[max_stu].aver);
}