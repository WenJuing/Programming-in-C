#include <stdio.h>
#include <windows.h>
// 分段函数求值
int main()
{
    double x, res;
    printf("there is a sectional function:\n");
    printf("     / x      (x < 1)\n");
    printf("y = <  2x-1   (1 ≤ x < 10)\n");
    printf("     \\ 3x-11  (x ≥ 10)\n\n");
    printf("please enter a x: ");
    scanf("%lf", &x);
    // 计算
    if (x < 1) res = x;
    else if (x >= 10) res = 3.0 * x - 11;
    else res = 2.0 * x - 1;
    printf("the result is %f\n", res);
    system("pause");
    return 0;
}