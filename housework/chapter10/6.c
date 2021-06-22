#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define N 5
// 将第5题的成绩按平均分排序，已排序的学生数据存入新文件stu_sort.dat中
struct Student {
    int num;
    char name[10];
    float score[3];
    float aver;
} stu[N];

void sort();
void save();
void show();
int main()
{
    sort();
    save();
    show();
    system("pause");
    return 0;
}

void sort()
{
    int i, j;
    struct Student t, * p, * q;
    FILE * fp;
    if ((fp = fopen("stud.dat", "rb")) == NULL)
    {
        printf("can not open.\n");
        exit(0);
    }
    // 将内容读取到str[]里并输出（读取结束时fread()函数返回0）
    for (int i = 0; fread(stu + i, sizeof(struct Student), 1, fp); i++)
    {
        printf("%6d %6s %6.2f %6.2f %6.2f %6.2f\n", stu[i].num, stu[i].name, stu[i].score[0],
        stu[i].score[1], stu[i].score[2], stu[i].aver);
    }
    // 按平均分从高到低排序
    for (p = stu; p < stu + N; p++)
    {
        for (q = p + 1; q < stu + N; q++)
        {
            if (p->aver < q->aver)
            {
                t = *p;
                *p = *q;
                *q = t;
            }
        }
    }
}
void save()
{
    FILE * fp = fopen("stu_sort.dat", "wb+");
    for (int i = 0; i < N; i++)
        fwrite(&stu[i], sizeof(struct Student), 1, fp);
    fclose(fp);
}
void show()
{
    struct Student * p = (struct Student*)malloc(sizeof(struct Student));
    FILE * fp = fopen("stu_sort.dat", "rb");
    printf("the content of stu_sort.dat:\n");
    for (int i = 0; i < N; i++)
    {
        fread(p, sizeof(struct Student), 1, fp);
        printf("%6d %6s %6.2f %6.2f %6.2f %6.2f\n", p->num, p->name, p->score[0],
        p->score[1], p->score[2], p->aver);
    }
    fclose(fp);
}