#include <stdio.h>
#include <windows.h>
// 写一个判断素数的函数，输出"是"或者"否
void is_prime(int n);

int main()
{
    int n;
    printf("输入一个正整数：");
    scanf("%d", &n);
    is_prime(n);
    system("pause");
    return 0;
}

void is_prime(int n)
{
    int i;
    for (i = 2; i <= (n/2); i++)
        if (n % i == 0)
            break;
    if (i > (n/2))
        printf("是素数\n");
    else
        printf("不是素数\n");
}