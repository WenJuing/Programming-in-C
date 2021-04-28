#include <stdio.h>
#include <windows.h>
// 通过指针变量访问整型变量
int main()
{
    int a = 1, b = 2, c = 3;
    int * p1, * p2, * p3 = &c;
    p1 = &a;
    p2 = &b;
    printf("*p1=%d   a=%d\n", *p1, a);
    printf("*p2=%d   b=%d\n", *p2, b);
    printf("*p3=%d   c=%d\n", *p3, c);
    *p3 = 0;    // 表示将0赋值给p3所指向的变量的值
    printf("*p3=%d   c=%d\n", *p3, c);
    system("pause");
    return 0;
}