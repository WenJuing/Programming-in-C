#include <stdio.h>
#include <windows.h>
// 通过指针调用函数，求整数a和b中的大者
int get_max(int a, int b);
int main()
{ 
    int a, b;
    int ( * p)(int, int);   // 定义指向函数的指针变量
    p = get_max;    // 使p指向get_max函数
    printf("输入a和b：");
    scanf("%d %d", &a, &b);
    printf("大者是%d\n", ( * p)(a, b)); // 通过指针变量调用函数
    system("pause");
    return 0;
}

int get_max(int a, int b)
{
    return a > b ? a : b;
}
