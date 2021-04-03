#include <stdio.h>
#include <windows.h>
// 求2/1 + 3/2 + 5/3 + 8/5 + 13/8 + 21/13 + ...前20项和
int main()
{
    int f1 = 1, f2 = 2;
    float sum = 0.0;
    for (int i = 0; i < 20; i++)
    {
        sum += (f2 * 1.0) / f1;
        f2 = f1 + f2;   // 整体前进1下
        f1 = f2 - f1;
    }
    printf("2/1 + 3/2 + 5/3 + 8/5 + 13/8 + 21/13 + ...前20项和为%f\n", sum);
    system("pause");
    return 0;
}