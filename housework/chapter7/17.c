#include <stdio.h>
#include <windows.h>
// 用递归将一整数转换成字符串
void int_convert_str(int num);

int main()
{
    int num;
    printf("输入一个整数，转换成字符串并输出：");
    scanf("%d", &num);
    // 若输入为负数，则转化成正数
    if (num < 0)
    {
        putchar('-');
        putchar(' ');
        num = -num;
    }
    int_convert_str(num);
    printf("\n");
    system("pause");
    return 0;
}

void int_convert_str(int num)
{
    if (num / 10 != 0)
        int_convert_str(num / 10);
    putchar(num % 10 + '0');    // 将数字转化成字符
    putchar(32);    // 输出空格
}
