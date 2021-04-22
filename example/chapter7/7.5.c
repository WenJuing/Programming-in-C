#include <stdio.h>
#include <windows.h>

// 输入4个整数，用函数嵌套找到最大值
int max_2(int a, int b);
int max_4(int a, int b, int c, int d);
int main()
{
    int a, b, c, d;
    printf("输入四个整数，输出最大的一个：");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("最大的是%d\n", max_4(a, b, c, d));
    system("pause");
    return 0;
}

int max_4(int a, int b, int c, int d)
{
    int max;
    max = max_2(a, b) > max_2(c, d) ? max_2(a, b) : max_2(c, d);
    return max;
}

int max_2(int a, int b)
{
    int max;
    max = a > b ? a : b;
    return max;
}
