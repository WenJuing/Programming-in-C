#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// 输入n个数，逆序输出
void invert(int * p, int len);
int main()
{
    int n;
    printf("输入整数总个数：");
    scanf("%d", &n);
    int * a = (int*)malloc(sizeof(int) * n);
    printf("输入%d整数：", n);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    invert(a, n);
    // 遍历
    for (int i = 0; i < n; i++)
        printf("%5d", * (a + i));
    printf("\n");
    system("pause");
    return 0;
}
void invert(int * p, int len)
{
    int t;
    for (int i = 0; i <= len / 2; i++)
    {
        t = * (p + i);
        * (p + i) = * (p + len - 1 - i);
        * (p + len - 1 - i) = t;
    }
}