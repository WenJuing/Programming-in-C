#include <stdio.h>
#include <windows.h>
// 通过指针调用函数，输入1调用get_max函数，输入2调用get_min函数
int get_max(int a, int b);
int get_min(int a, int b);
int main()
{ 
    int a, b, n;
    int ( * p)(int, int);   // 定义指向函数的指针变量
    printf("[1]求最大值\n");
    printf("[2]求最小值\n");
    scanf("%d", &n);
    p = n == 1 ? get_max : get_min;
    printf("输入a和b：");
    scanf("%d %d", &a, &b);
    printf("结果：%d\n", ( * p)(a, b)); // 通过指针变量调用函数
    system("pause");
    return 0;
}

int get_max(int a, int b)
{
    return a > b ? a : b;
}

int get_min(int a, int b)
{
    return a < b ? a : b;
}