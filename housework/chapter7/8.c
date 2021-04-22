#include <stdio.h>
#include <windows.h>
#include <math.h>  // 使用pow()函数
// 写一个函数，输入一个4位数字，按每位隔一个空格的形式输出
void print_formatted_num(int num);

int main()
{
    int num;
    printf("输入一个4位数字：\n");
    scanf("%d", &num);
    print_formatted_num(num);
    printf("\n");
    system("pause");
    return 0;
}

void print_formatted_num(int num)
{
    int r, n, t;
    for (r = 3; r >= 0; r--)
    {
        t = pow(10, r);
        n = num / t;   // 取最高位
        printf("%-2d", n);
        num %= t;  // 去最高位
    }
}