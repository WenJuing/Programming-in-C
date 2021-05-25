#include <stdio.h>
#include <windows.h>
// 输入一行文字，统计其大写字母、小写字母、空格、数字和其他字符的数量
void statistic(char * p);
int main()
{
    char str[50];
    printf("输入一段字符串：\n");
    gets(str);
    statistic(str);
    system("pause");
    return 0;
}

void statistic(char * p)
{
    int upp, low, space, num, other;
    upp = low = space = num = other = 0;
    while (*p)
    {
        if (*p >= 'A' && *p <= 'Z')
            upp++;
        else if (*p >= 'a' && *p <= 'z')
            low++;
        else if (*p == ' ')
            space++;
        else if (*p >= '0' && *p <= '9')
            num++;
        else
            other++;
        p++;
    }
    printf("大写字母：%d个\n", upp);
    printf("小写字母：%d个\n", low);
    printf("空格：%d个\n", space);
    printf("数字：%d个\n", num);
    printf("其他字符：%d个\n", other);
}