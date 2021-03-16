#include <stdio.h>
#include <windows.h>
// 从键盘输入BOY3个字符，然后输出
int main()
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    system("pause");
    return 0;
}