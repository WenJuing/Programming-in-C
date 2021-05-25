#include <stdio.h>
#include <windows.h>
int get_str_len(char * p);
int main()
{
    char str[30];
    printf("输入一个字符串：");
    gets(str);
    printf("长度为：%d\n", get_str_len(str));
    system("pause");
    return 0;
}

int get_str_len(char * p)
{
    int len;
    for (len = 0; *p != '\0'; len++, p++);
    return len;
}