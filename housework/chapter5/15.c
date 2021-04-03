#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用fabs()
#define f(x) (2*x*x*x - 4*x*x + 3*x - 6)
// 用二分法求(-10,10)的根：2x^3 - 4x^2 + 3x - 6 = 0

void range(double left, double right);
int main()
{
    range(-10, 10);
    system("pause");
    return 0;
}

void range(double left, double right)
{
    if (fabs(left-right) < 1e-5 && f(left)*f(right) < 0)    // 当两端点距离足够小且左右f(x)异号，此时为根
    {
        printf("根为%lf\n", left);
    }
    if (fabs(left-right) > 1e-5)
    {
        range(left, (left+right)/2);
        range((left+right)/2, right);
    }
}