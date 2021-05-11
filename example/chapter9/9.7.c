#include <stdio.h>
#include <windows.h>
#define N 3     // 学生数为3人
// 输出平均成绩最高的学生的信息（学号、姓名、3门课成绩和平均成绩）
struct Student {
    int num;
    char name[30];
    float score[3];
    float aver;
};
void input(struct Student stu[]);
struct Student * get_max(struct Student * p);
void show(struct Student * p);
int main()
{

    struct Student stu[N];
    input(stu);
    show(get_max(stu));
    system("pause");
    return 0;
}
void input(struct Student * p)
{
    printf("请输入各学生的信息：学号、姓名、3门课成绩：\n");
    for (int i = 0; i < N; i++, p++)
    {
        scanf("%d %s %f %f %f", 
        &(p->num), &p->name, &p->score[0], &p->score[1], &p->score[2]);
        p->aver = (p->score[0] + p->score[1] + p->score[2]) / 3; 
    }

}
struct Student * get_max(struct Student * p)
{
    struct Student * max = p;
    for (int i = 0; i < N; i++, p++)
        if (p->aver > max->aver)
            max = p;
    return max;
}
void show(struct Student * p)
{
    printf("成绩最高的学生是：\n");
    printf("学号：%d\n", p->num);
    printf("姓名：%s\n", p->name);
    printf("三门课成绩：%5.2f %5.2f %5.2f\n", p->score[0], p->score[1], p->score[2]);
    printf("平均成绩：%.2f\n", p->aver);
}