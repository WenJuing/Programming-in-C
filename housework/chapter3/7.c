#include <stdio.h>
#include <windows.h>
#define PI 3.14
int main()
{
    double r = 1.5, h = 3.0;
    double radius, circleArea, ballArea, ballV, cylinderV;
    radius = 2 * PI * r;
    circleArea = PI * r * r;
    ballArea = 4 * circleArea;
    ballV = (1.0 / 3) * circleArea * r;
    cylinderV = circleArea * h;
    puts("已知圆半径r=1.5，圆柱高h=3");
    printf("得圆周长：%.2f\n", radius);
    printf("圆面积：%.2f\n", circleArea);
    printf("球表面积：%.2f\n", ballArea);
    printf("球体积：%.2f\n", ballV);
    printf("圆柱体积：%.2f\n", cylinderV);
    system("pause");
    return 0;
}