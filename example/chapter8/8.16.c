#include <stdio.h>
#include <windows.h>
// 输出字符串和第8个字符
int main()
{
    char string[] = "I love China!";
    puts(string);
    putchar(string[7]);
    printf("\n");
    system("pause");
    return 0;
}