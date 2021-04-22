#include <stdio.h>
#include <windows.h>
// 递归的应用
int age(int a);
int main()
{
    printf("%d\n", age(5));
    system("pause");
    return 0;
}

int age(int a)
{
    int c;
    if (a == 1)
        c = 10;
    else
        c = age(a-1) + 2;
    return c;
}