#include <stdio.h>
#include <windows.h>
// 8.3的扩展，请思考为什么输出与8.3的不一样？
void swap(int * p1, int * p2);
int main()
{
    int a, b, *p1, *p2, *t;
    printf("输入a和b：");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
        swap(p1, p2);
    printf("max=%d,min=%d\n", *p1, *p2);
    system("pause");
    return 0;
}

void swap(int * p1, int * p2)
{
    int  * t;
    t = p1;
    p1 = p2;
    p2 = t;
}