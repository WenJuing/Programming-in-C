#include <stdio.h>
#include <windows.h>
#include <math.h>
// 写一个函数，用牛顿迭代法求 x^3 + 2x^2 + 3x + 4在1附近的一个实根
double get_x(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    double x;
    printf("输入4个数代表a、b、c和d：\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = get_x(a, b, c, d);
    printf("%dx^3 + %dx^2 + %dx + %d = 0的根为%f\n", a, b, c, d, x);
    system("pause");
    return 0;
}

double get_x(int a, int b, int c, int d)
{
    double x1, x2 = 1, F, f;
    do {
        x1 = x2;
        F = ((a * x1 + b) * x1 + c) * x1 + d;
        f = (3 * a * x1 + 2 * b) * x1 + c;
        x2 = x1 - F / f;
    } while (fabs(x1 - x2) > 1e-5);
    return x2;
}