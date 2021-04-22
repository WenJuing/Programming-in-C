#include <stdio.h>
#include <windows.h>
// 写一个函数，统计字符串中的字母、数字、空格和其他字符的个数
void statistic_str_type(char str[]);

int main()
{
    char str[50];
    printf("输入一个字符串：\n");
    gets(str);
    statistic_str_type(str);
    printf("\n");
    system("pause");
    return 0;
}

void statistic_str_type(char str[])
{
    int letter, number, space, other;
    letter = number = space = other = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            letter++;
        else if (str[i] >= '0' && str[i] <= '9')
            number++;
        else if (str[i] == ' ')
            space++;
        else
            other++;
    }
    printf("字母：%d个\n", letter);
    printf("数字：%d个\n", number);
    printf("空格：%d个\n", space);
    printf("其他：%d个\n", other);
}