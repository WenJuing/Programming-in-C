#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用fabs()
#define F(x) (2*x*x*x - 4*x*x + 3*x - 6)
#define f(x) (6*x*x - 8*x + 3)
// 用牛顿迭代法求下面方程在1.5附近的根：2x^3 - 4x^2 + x3 - 6
int main()
{
    double x1, x2;
    x2 = 1.5;
    do {
        x1 = x2;
        x2 = x1 - F(x1)*1.0 / f(x1);
    } while (fabs(x1-x2) >= 1e-5);
    printf("方程在1.5附近的根为：%lf\n", x2);
    system("pause");
    return 0;
}