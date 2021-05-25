#include <stdio.h>
#include <windows.h>
// 10个数，最小的与第一个对换，最大的与最后一个对换
void exchange(int * p);     // 实现方法一
void exchange_version_2(int * p);   // 实现方法二
void input(int * p);
void show(int * p);
int main()
{
    int a[10];
    input(a);
    show(a);
    exchange_version_2(a);
    show(a);
    system("pause");
    return 0;
}

void exchange(int * p)
{
    int * max, * min, * pi, t;
    min = max = p;  // 开始时min和max都指向第1个数
    for (pi = p + 1; pi < p + 10; pi++)
    {
        if  (*pi > *max)
        {
            max = pi;
        }
        if (*pi < *min)
        {
            min = pi;
        }
    }
    // 将最小的与第1个交换
    t = *min;
    *min = p[0];
    p[0] = t;
    // 若第1个是最大的（此时max指向第一个），交换完后max指向的就不是最大的了
    // 最大的而是和min指向的数对调了，此时min指向最大的数，故要让max = min
    if (max == p) max = min;
    t = *max;
    *max = p[9];
    p[9] = t;

}
void exchange_version_2(int * p)
{
    // 先找10个数中最小的，和第一个数对调后，再找10个数中最大的对调（分两次进行）
    int * max, * min, * pi, t;
    // 找最小的对调
    min = p;
    for (pi = p + 1; pi < p + 10; pi++)
        if (*pi < *min) min = pi;
    t = * min;
    * min = p[0];
    p[0] = t;
    // 找最大的对调
    max = p;
    for (pi = p + 1; pi < p + 10; pi++)
        if (*pi > *max) max = pi;
    t = * max;
    * max = p[9];
    p[9] = t;
}
void input(int * p)
{
    printf("输入10个整数：\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", p++);
}
void show(int * p)
{
    printf("数组成员：");
    for (int i = 0; i < 10; i++)
        printf("%5d", *p++);
    printf("\n");
}