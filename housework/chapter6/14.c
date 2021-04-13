#include <stdio.h>
#include <windows.h>
// 不使用strcmp()函数比较两个字符串的大小，并返回值
// 返回值规则：前者大则返回正数，值为差值，比如 "And"和"Aid"比较，n比i大5，返回正5。前者小同理
int main()
{
    int i, res = 0;
    char str1[20];
    char str2[20];

    puts("输入两个字符串，比较大小");
    puts("输入一个段字符串：");
    gets(str1);
    puts("输入二个段字符串：");
    gets(str2);
    // 进行比较
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
        {
            res = str1[i] - str2[i];
            break;
        }
        if (str1[i] < str2[i])
        {
            res = str1[i] - str2[i];
            break;
        }
    }
    if (res > 0)
        printf("第一个字符串大，返回结果%d\n", res);
    else if (res < 0)
        printf("第二个字符串大，返回结果%d\n", res);
    else
        puts("两个字符串一样大");

    // 程序改进
    i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0') i++;
    if (str1[i] != str2[i])
        res = str1[i] - str2[i];
    printf("res = %d\n", res);

    system("pause");
    return 0;
}