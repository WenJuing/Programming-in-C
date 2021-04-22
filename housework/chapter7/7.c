#include <stdio.h>
#include <windows.h>
// 写一个函数，将一个字符串中的元音字母复制到另一个字符串中并输出
void get_voice(char str_1[], char str_2[]);

int main()
{
    char str_1[30], str_2[30];
    printf("输入一段字符串：\n");
    gets(str_2);
    get_voice(str_1, str_2);
    puts(str_1);
    system("pause");
    return 0;
}

void get_voice(char str_1[], char str_2[])
{
    int i, j;
    for (i = 0, j = 0; str_2[i] != '\0'; i++)
    {
        if (str_2[i] == 'a' || str_2[i] == 'i' || str_2[i] == 'u' || 
            str_2[i] == 'e' || str_2[i] == 'o')
        {
            str_1[j++] = str_2[i];
        }
    }
    str_1[j] = '\0';
}