#include <stdio.h>
#include <windows.h>
#include <math.h>
// 求一元二次方程的解
int main()
{
    float a, b, c, x1, x2, r;
    printf("求解方程ax^2+bx+c=0，请输入参数a，b和c：");
    scanf("%f %f %f", &a, &b, &c);
    r = b * b - 4 * a * c;
    if (r > 0) {
        x1 = (-b + sqrt(r)) / (2 * a);
        x2 = (-b - sqrt(r)) / (2 * a);
        printf("此方程有两个不同的根：x1=%f\tx2=%f\n", x1, x2);
    } else if(r == 0) {
        x1 = x2 = -b / (2 * a);
        printf("次方程有双重根：x1=x2=%f\n", x1);
    } else {
        printf("此方程无根！\n");
    }
    system("pause");
    return 0;
}