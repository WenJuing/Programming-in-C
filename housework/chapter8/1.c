#include <stdio.h>
#include <windows.h>
// 输入3个整数，按由小到大的顺序输出
void sort(int * p1, int * p2, int * p3);
int main()
{
    int a, b, c;
    printf("输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    system("pause");
    return 0;
}
void sort(int * p1, int * p2, int * p3)
{
    int t;
    if (*p1 > *p2)
    {
        t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
    if (*p1 > *p3)
    {
        t = *p1;
        *p1 = *p3;
        *p3 = t;
    }
    if (*p2 > *p3)
    {
        t = *p2;
        *p2 = *p3;
        *p3 = t;
    }
}