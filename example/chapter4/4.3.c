#include <stdio.h>
#include <windows.h>
// 输入三个数，然后从小到大输出
int main()
{
    float a, b, c, t;
    puts("请输入三个实数：");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    printf("%.2f %.2f %.2f\n", a, b, c);
    system("pause");
    return 0;
}