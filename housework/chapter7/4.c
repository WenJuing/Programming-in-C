#include <stdio.h>
#include <windows.h>
// 写一个函数对3×3矩阵进行转置操作
void invert(int arr[][3]);  // 转置操作
void show_arr(int arr[][3]);    // 遍历数组

int main()
{
    int arr[3][3], i, j;

    printf("输入9个整数给3×3矩阵赋值：");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);

    show_arr(arr);
    invert(arr);
    show_arr(arr);

    system("pause");
    return 0;
}

void invert(int arr[][3])
{
    int t;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }
}

void show_arr(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%-3d", arr[i][j]);
        }
        printf("\n");
    }
}