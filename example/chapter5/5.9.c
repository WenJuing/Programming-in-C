#include <stdio.h>
#include <windows.h>
// 输入大于3的整数，判断是否为素数（prime）
void isPrime(int n);
// 改进版（重要）
void isPrimePro(int n);
int main()
{
    int n;
    printf("输入大于3的整数，判断是否为素数：");
    scanf("%d", &n);
    isPrime(n);
    isPrimePro(n);
    system("pause");
    return 0;
}
void isPrime(int n)
{
    // flag为1，则是素数；为0，则不是素数
    int flag = 1;
    // 条件可写成三种：i < n-1 || i < n/2 i <= sqrt(n)
    for (int i=2; i<=n/2; i++) {
        if (n%i == 0) {
            flag = 0;
            break;
        }
    }     
    flag == 1 ? printf("%d是素数\n", n) : printf("%d不是素数\n", n);
}
void isPrimePro(int n)
{
    int i;
    for (i=2; i<=n/2; i++)
        if (n%i == 0) break;
    // 若循环提前结束，则代表不是素数
    i < n/2 ? printf("%d不是素数\n", n) : printf("%d是素数\n", n);
}
