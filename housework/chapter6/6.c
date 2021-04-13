#include <stdio.h>
#include <windows.h>
#define N 10
// 输出杨辉三角形的前10行
int main()
{
    int i, j, a[N][N];
    // 先将每行第一个和斜边处的位置赋值1
    for (i = 0; i < N; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (i = 2; i <= N; i++)   // 每行
    {
        for (j = 1; j <= i-1; j++)    // 每列
        {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }
    // 打印输出
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%-5d", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}