#include <stdio.h>
#include <windows.h>
// 有一个3×4矩阵，输出其中的最大值和它的行号及列号
int main()
{
    int a[3][4] = {{1,2,3,4}, {9,8,7,6}, {-10,10,-5,2}};
    int max = a[0][0];
    // t代表中间变量，col代表最大值的列号，row代表最大值的行号
    int t, col, row;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                t = a[i][j];
                a[i][j] = max;
                max = t;
                row = i;
                col = j;
            }
        }
    }
    printf("最大值为a[%d][%d] = %d", row, col, max);
    printf("\n");
    system("pause");
    return 0;
}