#include <stdio.h>
#include <windows.h>
// 输入3个整数，按先大后小的顺序输出，用函数实现
void swap(int * p1, int * p2);
void sort(int * p1, int * p2, int * p3);
int main()
{
    int a, b, c;
    printf("输入a、b和c：");
    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    printf("sorted:%5d%5d%5d\n", a, b, c);
    system("pause");
    return 0;
}

void swap(int * p1, int * p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void sort(int * p1, int * p2, int * p3)
{
    if (*p1 < *p2) swap(p1, p2);
    if (*p1 < *p3) swap(p1, p3);
    if (*p2 < *p3) swap(p2, p3);
}