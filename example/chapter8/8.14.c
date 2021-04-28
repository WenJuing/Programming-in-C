#include <stdio.h>
#include <windows.h>
// 3学生4门课，计算总平均分和第n个学生的成绩
void aver(float * p, int n);
void search(float ( * p)[4], int n);
int main()
{
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    aver( * score, 12);
    search(score, 2);
    system("pause");
    return 0;
}
void aver(float * p, int n)
{
    float * p_end = p + n - 1;
    float sum = 0, aver = 0;
    for (; p <= p_end; p++)
    {
        sum += * p;
    }
    aver = sum / 12;
    printf("平均数：%f\n", aver);
}
void search(float ( * p)[4], int n)
{
    printf("第%d个学生的成绩：");
    for (int i = 0; i < 4; i++)
    {
        printf("%8.2f", * ( * (p + n) + i));
    }
    printf("\n");
}