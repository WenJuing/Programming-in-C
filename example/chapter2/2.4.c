#include <stdio.h>
#include <windows.h>

// 计算 1 - 1/2 + 1/3 - ... + 1/99 - 1/100

int main()
{
    int i;
    float num, sum;
    sum = 0.00;
    for (i=1; i<=100; i++) {
        num = 1.0 / i;
        if (i%2 == 0) sum -= num;
        else sum += num;
    }
    printf("1 - 1/2 + 1/3 - ... + 1/99 - 1/100 = %f\n", sum);
    system("pause");
    return 0;
}