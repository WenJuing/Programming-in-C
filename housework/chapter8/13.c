#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
// 用矩形法求定积分的通用函数，分别求(0->1)∫sinxdx、(-1->1)∫cosxdx、(0->2)∫e^xdx
float integral(float (*p)(float x), float a, float b, int n);
float fsin(float x);
float fcos(float x);
float fexp(float x);
int main()
{
    int n = 20;
    float a1, b1, a2, b2, a3, b3, (*p)(float x);
    printf("输入a1和b1：");
    scanf("%f %f", &a1, &b1);
    printf("输入a2和b2：");
    scanf("%f %f", &a2, &b2);
    printf("输入a3和b3：");
    scanf("%f %f", &a3, &b3);
    p = fsin;
    printf("sin的定积分为%f\n", integral(p, a1, b1, n));
    p = fcos;
    printf("cos的定积分为%f\n", integral(p, a2, b2, n));
    p = fexp;
    printf("e^x的定积分为%f\n", integral(p, a3, b3, n));
    system("pause");
    return 0;
}
float integral(float (*p)(float x), float a, float b, int n)
{
    float x, h, res;
    h = (b - a) / n;
    x = a;
    res = 0;
    for (int i = 1; i <= n; i++)
    {
        x += h;
        res += (*p)(x) * h;
    }
    return res;
}
float fsin(float x)
{
    return sin(x);
}
float fcos(float x)
{
    return cos(x);
}
float fexp(float x)
{
    return exp(x);  // 计算e的x次方
}