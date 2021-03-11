#include <stdio.h>
#include <windows.h>

// 计算 n!
int multiply(int a);
// 计算 奇数!
int multiplyOdd(int a);
// 计算 偶数!
int multiplyEven(int a);

int main()
{
    printf("1×2×3×4×5 = %d\n", multiply(5));
    printf("1×3×5×7×9×11 = %d\n", multiplyOdd(11));
    printf("2×4×6×8×10×12 = %d\n", multiplyEven(12));
    system("pause");
    return 0;
}
int multiply(int a)
{
    int i, sum;
    sum = 1; 
    for (i=1; i<=a; i++) {
        sum *= i;
    }
    return sum;
}
int multiplyOdd(int a)
{
    int i, sum;
    sum = 1; 
    for (i=1; i<=a; i+=2) {
        sum *= i;
    }
    return sum;
}
int multiplyEven(int a)
{
    int i, sum;
    sum = 1; 
    for (i=2; i<=a; i+=2) {
        sum *= i;
    }
    return sum;
}
