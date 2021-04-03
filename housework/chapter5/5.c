#include <stdio.h>
#include <windows.h>
#include <math.h>   // 包含pow()函数
// 求Sn = a + aa + aaa + ... + a..a(n个a)，输入参数为a和n
int main()
{
    // num为单项值
    int n;
    double num = 0.0, sum = 0.0, a;
    printf("计算Sn = a + aa + aaa + ... + a..a(n个a)，请输入a和n：");
    scanf("%lf %d", &a, &n);
    for (int i = 1; i <= n; i++)
    {
        num += a * pow(10, i-1);
        sum += num;
    }
    printf("Sn = %lf\n", sum);
    system("pause");
    return 0;
}