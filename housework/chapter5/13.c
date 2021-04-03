#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用fabs()
// 用迭代法求x = 根号(a)。公式：Xn+1 = (1/2)(Xn + a/Xn)
int main()
{
    double a, x1, x2;
    printf("请输入一个正数：");
    scanf("%lf", &a);
    x1 = a/2;
    x2 = (x1 + a/x1) / 2;
    do {
        x1 = x2;
        x2 = (x1 + a/x1) / 2;
    } while (fabs(x1-x2) > 1e-5);
    printf("%f的平方根为%f\n", a, x1);
    system("pause");
    return 0;
}