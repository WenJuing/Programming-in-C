#include <stdio.h>
#include <windows.h>
// 3个学生4门课，输出学生序号后输出该学生的全部成绩
float * search(float ( * p)[4], int n);
int main()
{ 
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    int n;
    float * p;
    printf("输入学生序号：");
    scanf("%d", &n);
    p = search(score, n);
    printf("第%d个学生的全部成绩为：", n);
    for (int i = 0; i < 4; i++)
        printf("%8.2f", * p++);
    printf("\n");
    system("pause");
    return 0;
}

float * search(float ( * p)[4], int n)
{
    return * (p + n);   // score[n][0]的地址
}