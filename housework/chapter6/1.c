#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用sqrt()
// 用筛选法求100之内的素数
// 筛选法：将不用的筛出，剩下要的
void prime(int n);
int main()
{
    // 下标代表对应的值，a[0]不使用
    int i, j, n, a[101];
    a[0] = 0;
    // 赋初值
    for (i = 1; i <= 100; i++)
    {
        a[i] = i;
    }
    // 先挖掉a[1]
    a[1] = 0;
    // 判断素数，不是的赋值0
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (j <= sqrt(i))
        {
            a[i] = 0;
        }
    }
    // 打印输出
    for (i = 1, n = 0; i <= 100; i++)
    {
        if (a[i] != 0)
        {
            printf("%-3d", a[i]);
            n++;
        }
        if (n % 10 == 0)
            printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}