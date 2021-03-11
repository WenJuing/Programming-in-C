#include <stdio.h>
#include <windows.h>

// 求两个数的最大公约数

// 1。辗转相除法
// 具体步骤：
// 过程1：大的数除小的数，若余数不为0，则原来小的数除余数（大除小，若余数大则对调再除）
// 过程2：重复过程1，直到余数为0，则最大公约数为另一个数
int gComDivisorByDivide(int a, int b);
int main()
{
    int a, b;
    printf("求最大公约数，输入a和b：");
    scanf("%d %d", &a, &b);
    printf("%d\n",gComDivisorByDivide(a,b));
    system("pause");
    return 0;
}
int gComDivisorByDivide(int a, int b)
{
    while (a != 0) {
    int t;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    a = a % b;
    }
    return b;
}
