#include <stdio.h>
#include <windows.h>
#include <math.h>
// 输入小于1000的正整数的，输出其平方根
// 若输入值不满足条件，则重新输入
int main()
{
    int n;
    printf("please enter a positive integer(range in 0~1000):");
    scanf("%d", &n);
    while (1) {
        if (n >= 0 && n < 1000) {
            printf("the sqrt is %f\n", sqrt(n));
            break;
        }
        else {
            printf("the range is worry, please enter again:");
            scanf("%d", &n);
        }
    }
    system("pause");
    return 0;
}