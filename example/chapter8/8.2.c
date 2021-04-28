#include <stdio.h>
#include <windows.h>
// 输入整数a和b，按先大后小的顺序输出
int main()
{
    int a, b, *p1, *p2, *t;
    printf("输入a和b：");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        t = p1;
        p1 = p2;
        p2 = t;
    }
    printf("a=%d,b=%d\n", a, b);
    printf("max=%d,min=%d\n", *p1, *p2);
    system("pause");
    return 0;
}