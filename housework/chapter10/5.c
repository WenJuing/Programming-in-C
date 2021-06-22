#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define N 5
// 输入5名学生的信息（学号，姓名3门课成绩），计算平均成绩，将数据和平均成绩存入stud.dat中
struct Student {
    int num;
    char name[10];
    float score[3];
    float aver;
} stu[N];

void input();
void save();
void show();
int main()
{
    input();
    save();
    show();
    system("pause");
    return 0;
}
void input()
{
    printf("input %d student's num, name and 3 score:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, 
        &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}
void save()
{
    FILE * fp = fopen("stud.dat", "wb+");
    for (int i = 0; i < N; i++)
        if (fwrite(&stu[i], sizeof(struct Student), 1, fp) != 1)
            printf("file write error\n");
    fclose(fp);
}
void show()
{
    struct Student * p = (struct Student*)malloc(sizeof(struct Student));
    FILE * fp = fopen("stud.dat", "rb");
    printf("the content of stud.dat:\n");
    for (int i = 0; i < N; i++)
    {
        fread(p, sizeof(struct Student), 1, fp);
        printf("%6d %6s %6.2f %6.2f %6.2f %6.2f\n", p->num, p->name, p->score[0],
        p->score[1], p->score[2], p->aver);
    }
    fclose(fp);
}