#include <stdio.h>
#include <windows.h>
#include <math.h>
// 求一元二次方程的解（改进版）
int main()
{
    double a, b, c, x1, x2, disc, realpart, imagpart;
    printf("求解方程ax^2+bx+c=0，请输入参数a，b和c：");
    scanf("%lf %lf %lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0) {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);
        printf("此方程有两个不同的根：x1=%6.4f\tx2=%6.4f\n", x1, x2);
    } else if(fabs(disc) < 1e-6) {  // 防止系统误差，将条件 disc == 0加以改进
        x1 = x2 = -b / (2 * a);
        printf("次方程有双重根：x1=x2=%6.4f\n", x1);
    } else {
        realpart = -b / (2 * a);
        imagpart = sqrt(-disc) / (2 * a);
        printf("此方程有共轭复根：");
        printf("x1=%6.4f+%6.4fi\n", realpart, imagpart);
        printf("x2=%6.4f-%6.4fi\n", realpart, imagpart);
    }
    system("pause");
    return 0;
}