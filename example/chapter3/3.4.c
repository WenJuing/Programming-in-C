#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("输入三角形三条边：");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("该三角形的面积为：%f\n", area);
    system("pause");
    return 0;
}