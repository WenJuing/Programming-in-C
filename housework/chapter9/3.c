#include <stdio.h>
#include <windows.h>
#define N 5
// 从主函数输入学生信息（num、name、score[3]），输出信息
typedef struct Student {
    int num;
    char name[20];
    float score[3];
} Student;

int main()
{
    Student stu[N];
    printf("输入5位学生的信息：包括学号、姓名、三门课的分数\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", 
        &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
    }
    printf(" No.  Name         ke_1   ke_2   ke_3\n");
    for (int i = 0; i < N; i++)
    {
        printf("%-3d %-10s %6.2f %6.2f %6.2f\n", 
        stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    system("pause");
    return 0;
}