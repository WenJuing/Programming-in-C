#include <stdio.h>
#include <windows.h>
#define N 4
#define M 5
// 找出一个二维数组中的鞍点
// 鞍点：该位置的元素在改行上最大，在该列上最小，也可能没有鞍点
int main()
{
    // flag为1代表是鞍点，为0代表不是鞍点
    int i, j, k, a[N][M], max, maxj, flag;

    // 输入数据
    printf("为4×5数组输入数据：\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        max = a[i][0];  // 暂时设每行最大值为第一个
        maxj = 0;
        flag = 1;
        for (j = 0; j < M; j++)
        {
            if (a[i][j] > max)  // 找到该行最大值
            {
                max = a[i][j];
                maxj = j;
            }
        }
        // 该行最大的在该列里和其他元素比较
        for (k = 0; k < N; k++) // 这里使用k而不用i是后面要用到i的值
        {
            if (max > a[k][maxj])  // 该元素大于任一该列元素，flag为0
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("鞍点为a[%d][%d] = %d\n", i, maxj, max);
            break;
        }
        if (!flag)
            printf("无鞍点\n");
    }
    system("pause");
    return 0;
}