#include <stdio.h>
#include <windows.h>
// 用递归求n!
int factorial(int n);
int main()
{
    int n;
    printf("输入正整数n，求n!：");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    system("pause");
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return factorial(n-1) * n;
}