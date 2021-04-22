#include <stdio.h>
#include <Windows.h>

int main()
{
    extern void enter_string(char str[]);   // 获取字符串
    extern void delete_string(char str[], char ch); // 删除指定字符
    extern void print_string(char str[]);   // 输出字符串

    char c, str[80];
    enter_string(str);
    scanf("%c", &c);
    delete_string(str, c);
    print_string(str);

    system("pause");
    return 0;
}