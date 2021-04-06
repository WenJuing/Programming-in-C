#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用fabs()
#define f(x) (x * ((2 * x - 4) * x + 3) - 6)    // 这样写可以减少计算量
// 用二分法求(-10,10)的根：2x^3 - 4x^2 + 3x - 6 = 0

void range(double left, double right);
int main()
{
    // left代表左端点，right代表右端点，inter代表中点
    double left, right, inter;
    // 先判断是否有根，若同号则无根，继续输入
    do {
        printf("输入一个范围：");
        scanf("%lf %lf", &left, &right);
    } while (f(left) * f(right) > 0);
    // 有根
    range(left, right);

    // 程序改进
    do {
        inter = (left + right) / 2;
        // 左区域有根，则舍弃右端点，中点成为右端点
        if (f(left) * f(inter) < 0)
        {
            right = inter;
        }
        // 否则是右区域有根，则舍弃左端点，中点成为左断点
        else
        {
            left = inter;
        }
    } while (fabs(f(inter)) >= 1e-5);
    printf("根为%lf\n", inter);
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