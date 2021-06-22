#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define N 5
// 将第7题的结果仍存入原文件
struct Student {
    int num;
    char name[10];
    float score[3];
    float aver;
} stu[N + 1];

void append();
void save();
void show();
int main()
{
    append();
    save();
    show();
    system("pause");
    return 0;
}

void append()
{
    int i, j;
    struct Student t, * p, * q;
    FILE * fp = fopen("stu_sort.dat", "rb");
    // 将内容读取到str[]里
    for (i = 0; i < N; i++)
        fread(stu + i, sizeof(struct Student), 1, fp);
    for (int i = 0; i < N; i++)
    {
        printf("%6d %6s %6.2f %6.2f %6.2f %6.2f\n", stu[i].num, stu[i].name, stu[i].score[0],
        stu[i].score[1], stu[i].score[2], stu[i].aver);
    }

    // 添加新数据
    printf("please input a new student data(num, name, 3 score):\n");
    scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, 
        &stu[N].score[0], &stu[N].score[1], &stu[N].score[2]);
        stu[N].aver = (stu[N].score[0] + stu[N].score[1] + stu[N].score[2]) / 3;

    // 按平均分从高到低排序
    for (p = stu; p < stu + N + 1; p++)
    {
        for (q = p + 1; q < stu + N + 1; q++)
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
    for (int i = 0; i < N + 1; i++)
        fwrite(&stu[i], sizeof(struct Student), 1, fp);
    fclose(fp);
}
void show()
{
    struct Student * p = (struct Student*)malloc(sizeof(struct Student));
    FILE * fp = fopen("stu_sort.dat", "rb");
    printf("the content of stu_sort.dat:\n");
    for (int i = 0; i < N + 1; i++)
    {
        fread(p, sizeof(struct Student), 1, fp);
        printf("%6d %6s %6.2f %6.2f %6.2f %6.2f\n", p->num, p->name, p->score[0],
        p->score[1], p->score[2], p->aver);
    }
    fclose(fp);
}