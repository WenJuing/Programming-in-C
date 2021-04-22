#include <stdio.h>
#include <windows.h>

// 输入两个整数，用函数找到较大者
int get_max(int a, int b);

int main()
{
    int a, b;
    printf("输入两个整数，输出较大的一个：");
    scanf("%d %d", &a, &b);
    printf("较大的是%d\n", get_max(a, b));
    system("pause");
    return 0;
}

int get_max(int a, int b)
{
    int max;
    max = a > b ? a : b;
    return max;
}