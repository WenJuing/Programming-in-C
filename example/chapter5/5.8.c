#include <stdio.h>
#include <windows.h>
// 求斐波那契数列前20个数   Fn = Fn-1 + Fn-2
// 参数n：输出个数
void Fibonacci(int n);
// 改进版
void FibonacciPro(int n);
// 完美版
void FibonacciProPro(int n);
int main()
{
    Fibonacci(19);
    printf("\n");
    FibonacciPro(19);
    system("pause");
    return 0;
}
// 可奇可偶
void Fibonacci(int n)
{
    int f1 = 1, f2 = 1;
    int f3;
    printf("%d %d ", f1, f2);
    // 循环之前以及输出2次，故条件n-2
    for (int i=1; i<=n-2; i++)
    {
        f3 = f2 + f1;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
}
// 只能输出偶数个
void FibonacciPro(int n)
{
    int f1 = 1, f2 = 1;
    for (int i=1; i<=(n/2); i++)
    {
        printf("%d %d ", f1, f2);
        f1 = f1 + f2;   // 整体前进2下
        f2 = f1 + f2;
    }
}
// 可积可偶
void FibonacciProPro(int n)
{
    int f1 = 0, f2 = 1, n = 0;
    printf("%-5d %-5d ", f1, f2);
    for (int i = 0; i < (19-2); i++, n++)
    {
        f2 = f1 + f2;   // 整体前进1下
        f1 = f2 - f1;
        printf("%-5d ", f2);
        if ((n-2) % 5 == 0) // 每输出5个数换行
            printf("\n");
    }
}