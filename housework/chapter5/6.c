#include <stdio.h>
#include <windows.h>
// 求1! + 2! + ... + 20!
double factorial(int n);

int main()
{
    // 注意，总和可能大于int的范围，故采用存储范围更大的double类型
    double sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        sum += factorial(i);
    }
    printf("1! + 2! + ... + 20! = %lf\n", sum);

    // 程序改进
    double t = 1, s = 0;
    for (int i = 1; i <= 20; i++)
    {
        t *= i;
        s += t;
    }
    printf("1! + 2! + ... + 20! = %lf\n", s);
    system("pause");
    return 0;
}

double factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}