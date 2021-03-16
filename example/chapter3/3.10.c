#include <stdio.h>
#include <windows.h>
// 从键盘输入大写字母，输出对应小写字母
int main()
{
    char a;
    a = getchar();
    putchar(a+32);
    putchar('\n');
    system("pause");
    return 0;
}