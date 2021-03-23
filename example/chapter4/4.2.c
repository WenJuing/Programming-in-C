#include <stdio.h>
#include <windows.h>
// 输入两个数，然后从小到大输出
int main()
{
    float a, b;
    puts("请输入两个实数：");
    scanf("%f %f", &a, &b);
    a > b ? printf("%f %f\n", b, a) : printf("%f %f\n", a, b);
    system("pause");
    return 0;
}