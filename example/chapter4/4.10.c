#include <stdio.h>
#include <windows.h>
// 根据距离不同的折扣计算总运送费
int main()
{
    // f总运费，p基本运费，w货重，s距离，d折扣，计算公式：f = p*w*s*(1-d)
    double f, p, w, s, d;
    int c;  // 折扣范围
    printf("Please enter price, weight, discount:");
    scanf("%lf %lf %lf", &p, &w, &s);   // 输入单价，重量，距离
    c = s / 250;
    switch (c)
    {
    case 1:
        d = 0.02;
        break;
    case 2:
    case 3:
        d = 0.05;
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        d = 0.08;
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        d = 0.10;
        break;
    case 12:
        d = 0.15;
        break;
    }
    f = p * w * s * (1-d);
    printf("freight=%10.2f\n", f);
    system("pause");
    return 0;
}