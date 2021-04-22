#include <stdio.h>
#include <windows.h>
// 写两个函数，分别求最小公倍数和最大公约数
int max_com_div(int a, int b);
int min_com_mul(int a, int b);

int main()
{
    int a, b;
    printf("输入两个正整数：");
    scanf("%d %d", &a, &b);
    printf("最大公约数为：%d\n", max_com_div(a, b));
    printf("最小公倍数为：%d\n", min_com_mul(a, b));
    system("pause");
    return 0;
}
int max_com_div(int a, int b)
{
    // 辗转相除法
    while (a != 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return b;
}
int min_com_mul(int a, int b)
{
    return ((a * b) / max_com_div(a, b));
}