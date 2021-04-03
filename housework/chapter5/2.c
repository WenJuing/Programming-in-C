#include <stdio.h>
#include <windows.h>
#include <math.h>   // 导入fabs(x) 返回双精度绝对值
// 求PI的近似值。公式：PI/4 = 1 - 1/3 + 1/5 - ...
// 新增要求：分别统计当fabs(t) >= 1e-6和fabs(t) >= 1e-8执行时循环的次数
int main()
{
    // pi派，sign正负号，num每项值，循环次数
    double pi, num;
    int n, sign;
    n = 0, sign = 1, num = 1.0;
    for (int i = 1; fabs(num) > 1e-6; i += 2, n++) 
    {
        pi += sign * num;
        sign *= -1;
        num = 1.0/(i+2);
    }
    printf("%.10f\n", pi*4);
    printf("循环了%d次\n", n);
    n = 0, sign = 1, num = 1.0, pi = 0.0;
    for (int i = 1; fabs(num) > 1e-8; i += 2, n++) // 条件1e-8越小，得到的值越精确
    {
        pi += sign * num;
        sign *= -1;
        num = 1.0 / (i+2);
    }
    printf("%.10f\n", pi*4);
    printf("循环了%d次\n", n);
    system("pause");
    return 0;
}