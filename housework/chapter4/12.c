#include <stdio.h>
#include <windows.h>
#include <math.h>
// 输入任意坐标，求该点高度
int main()
{
    float x, y, h;
    printf("请输入一坐标：");
    scanf("%f %f", &x, &y);
    // 高度为10的条件
    // 1≤|x|≤3 且 1≤|y|≤3 且 (|x|,|y|)到圆心(2,2)的距离小于等于半径1
    h = (abs(x)>=1 && abs(x)<=3) && (abs(y)>=1 && abs(y)<=3) && 
    (sqrt(abs(x-2)*abs(x-2)+abs(y-2)*abs(y-2))<=1) ? 10.0 : 0.0;
    printf("该点高度为%.2f\n", h);
    system("pause");
    return 0;
}