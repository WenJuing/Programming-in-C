#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <math.h>

// 判断是否是素数（除1和本身以外，不能被任何其他整数整除，n≥2）
bool isPrimeNum(int n);
bool isPrimeNumPro(int n);
bool isPrimeNumPro2(int n);

int main()
{
    if (isPrimeNum(7)) printf("7是素数\n");
    if (isPrimeNum(6)) printf("6是素数\n");
    if (isPrimeNumPro(7)) printf("7是素数\n");
    if (isPrimeNumPro2(7)) printf("7是素数\n");
    system("pause");
    return 0;
}
bool isPrimeNum(int n)
{
    int i;
    for (i=2; i<n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}
bool isPrimeNumPro(int n)
{
    int i;
    for (i=2; i<(int)(n/2); i++) {
        if (n%i == 0) return false;
    }
    return true;
}
bool isPrimeNumPro2(int n)
{
    int i;
    for (i=2; i<sqrt(n); i++) {
        if (n%i == 0) return false;
    }
    return true;
}