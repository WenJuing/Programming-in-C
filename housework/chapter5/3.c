#include <stdio.h>
#include <windows.h>
/* 求最大公约数和最小公倍数
公式：m * n = [最大公约数] * [最小公倍数]
最大公约数有三种求法：
1）辗转相除法：大除小，取余替换大的，继续大除小，直到余数为0，小的则为最大公约数
2）辗转相减法：大减小，结果替换大的，继续大减小，直到两数相等，此时两数为最大公约数
3）穷举法：for循环，i为两数中任意一个，无条件，i值递减，当i能同时被两数整除，则i为最大公约数，break退出*/

// 辗转相除法
int bnDiv(int m, int n);
// 辗转相减法
int bnSub(int m, int n);
// 穷举法
int bnFor(int m, int n);
int main()
{
    int m, n;
    printf("请输入两个整数：");
    scanf("%d %d", &m, &n);
    printf("辗转相除法：%d和%d的最大公约数为%d，最小公倍数为%d\n", m, n, bnDiv(m, n), m*n/bnDiv(m, n));
    printf("辗转相减法：%d和%d的最大公约数为%d，最小公倍数为%d\n", m, n, bnSub(m, n), m*n/bnSub(m, n));
    printf("穷  举  法：%d和%d的最大公约数为%d，最小公倍数为%d\n", m, n, bnFor(m, n), m*n/bnFor(m, n));
    system("pause");
    return 0;
}

int bnDiv(int m, int n)
{
    while (m % n != 0) 
    {
        if (m > n) 
        {
            m = m % n;
        } 
        else 
        {
            n = n % m;
        }
    }
    return n;
}

int bnSub(int m, int n)
{
    while (m != n)
    {
        if (m > n) 
        {
            m = m - n;
        } 
        else 
        {
            n = n - m;
        }
    }
    return n;
}

int bnFor(int m, int n)
{
    int i;
    for (i = m; ; i--)
    {
        if (m % i == 0 && n % i == 0) break;
    }
    return i;
}