#include <stdio.h>
#include <windows.h>
/* 
将一个二维数组进行转置操作
a = |1 2 3|  = >  b = |1 4|
    |4 5 6|           |2 5|
                      |3 6|
*/
int main()
{
    int a [2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b [3][2];
    for (int i = 0; i < 3; i++)
    {
        b[i][0] = a[0][i];
        b[i][1] = a[1][i];
    }
/*     // 或者下面这种方式
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    } */
    // 打印输出a
    printf("数组a:\n");
    for (int i = 0; i < 2; i++) // 每行
    {
        for (int j = 0; j < 3; j++) // 每列
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // 打印输出b
    printf("数组b:\n");
    for (int i = 0; i < 3; i++) // 每行
    {
        for (int j = 0; j < 2; j++) // 每列
        {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}