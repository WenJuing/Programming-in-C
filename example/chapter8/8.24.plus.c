#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用pow()函数
// 通过指针调用函数，求定积分
double fun(double a, double b, double ( * p)(double, double));
double f1(double a, double b);
double f2(double a, double b);
double f3(double a, double b);
double f4(double a, double b);
double f5(double a, double b);
int main()
{ 
    int a, b, n, res;
    printf("[1]求1+x的定积分\n");
    printf("[2]求2x+3的定积分\n");
    printf("[3]求e^x+1的定积分\n");
    printf("[4]求(1+x)^2的定积分\n");
    printf("[5]求x^3的定积分\n\n");
    printf("输入序号:");
    scanf("%d", &n);
    printf("输入下限a和上限b:");
    scanf("%d %d", &a, &b);
    if (n == 1) res = fun(a, b, f1);
    else if (n == 2) res = fun(a, b, f2);
    else if (n == 3) res = fun(a, b, f3);
    else if (n == 4) res = fun(a, b, f4);
    else if (n == 5) res = fun(a, b, f5);
    printf("结果：%d\n", res); // 通过指针变量调用函数
    system("pause");
    return 0;
}

double fun(double a, double b, double ( * p)(double, double))
{
    return ( * p)(a, b);
}
double f1(double a, double b)
{
    return (b + b * b / 2) - (a + a * a / 2);
}
double f2(double a, double b)
{
    return (b * b + 3 * b) - (a * a + 3 * a);
}
double f3(double a, double b)
{
    return (pow(1e1,b) + b) - (pow(1e1,a) + a);
}
double f4(double a, double b)
{
    return ((pow(1+b,3)) - (pow(1+a,3))) / 3;
}
double f5(double a, double b)
{
    return ((pow(b,4)) - (pow(a,4))) / 4;
}