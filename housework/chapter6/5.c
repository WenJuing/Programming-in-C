#include <stdio.h>
#include <windows.h>
// 将原来数组里的值逆序排放，比如：1 4 2 8 -> 8 2 4 1
int main()
{
    int t;
    int a[5] = {8, 6, 5, 4, 1};
    // 输出
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i <= 2; i++)
    {
        t = a[4-i];
        a[4-i] = a[i];
        a[i] = t;
    }
    // 输出
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}