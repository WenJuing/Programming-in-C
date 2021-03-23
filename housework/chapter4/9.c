#include <stdio.h>
#include <windows.h>
#include <math.h>
// 输入一个不超过5位的正整数，要求：
// 1）求出它是几位数
// 2）分别输出每一位数字
// 3）按逆序输出每一位数字

int getScale(int n);    // 获取值的位数
void printEveryNum(int n, int r);   // 输出值的每一位
void printEveryNumForInvert(int n, int r);  // 逆序输出值的每一位
int main()
{
    int n, r;   // n输入值，r值的位数
    printf("please enter a positive integer(range in 0~99999): ");
    scanf("%d", &n);
    r = getScale(n);
    printf("1）它是%d位数\n", r);
    printf("2）每一位为：");
    printEveryNum(n, r);
    printf("2）逆序的每一位为：");
    printEveryNumForInvert(n, r);
    system("pause");
    return 0;
}
int getScale(int n)
{
    int i;
    for (i=1; i; i++) {
        n /= 10;    // 去个位
        if (n == 0) break;
    }
    return i;
}
void printEveryNum(int n, int r)
{
    int i, t, q;
    q = pow(10, r-1);
    for (i=0; i<r; i++) {
        t = n / q; // 取最高位
        printf("%d ", t);
        n = n % q;    // 去最高位
        q /= 10;
    }
    printf("\n");
}
void printEveryNumForInvert(int n, int r)
{
    int i, t, q;
    q = 10;
    for (i=0; i<r; i++) {
        t = n % q; // 取最低位
        printf("%d ", t);
        n = n / q;    // 去最低位
    }
    printf("\n");
}