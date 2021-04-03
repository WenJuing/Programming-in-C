#include <stdio.h>
#include <windows.h>
#include <math.h>   // 导入fabs(x) 返回双精度绝对值
// 求PI的近似值。公式：PI/4 = 1 - 1/3 + 1/5 - ...
int main()
{
    double pi, sign, num;
    sign = 1;
    num = 1;
    // 条件1e-8越小，得到的值越精确
    for (int i=1; fabs(num)>1e-8; i+=2) {
        pi += sign * num;
        sign *= -1;
        num = 1.0/(i+2);
    }
    printf("%.10f\n", pi*4);
    system("pause");
    return 0;
}