#include <stdio.h>
#include <windows.h>
// 用递归方法求n阶勒让德多项式的值
double get_res(int n, int x);
int main()
{
    int n, x;
    double res;
    printf("输入正整数n和x，求n阶勒让德多项式的值：\n");
    scanf("%d %d", &n, &x);
    res = get_res(n, x);
    printf("值为：%f\n", res);
    system("pause");
    return 0;
}

double get_res(int n, int x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return (2 * n-1) * x * get_res(n-1,x) - (n - 1) * get_res(n-2,x) / n;
}