#include <stdio.h>
#include <Windows.h>
// 有一个3×4的矩阵，求其中的最大值
int  get_max(int a[][4]);
int main()
{
    int a[3][4] = {{1,3,5,7},{2,4,6,8},{15,17,34,12}};
    printf("最大值为：%d\n", get_max(a));
    system("pause");
    return 0;
}

int get_max(int a[][4])
{
    int max = a[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}