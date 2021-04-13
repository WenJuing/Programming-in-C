#include <stdio.h>
#include <windows.h>
// 三个字符串，比较大小，把最大的输出
int main()
{
    char str[3][20];
    char string[20];

    puts("输入三条句子，按回车开始输入下一个句子：");
    gets(str[0]);
    gets(str[1]);
    gets(str[2]);
    if (strcmp(str[0], str[1])) // 若第一句比第二句大
    {
        if (strcmp(str[0], str[2])) // 若第一句比第三句大
        {
            strcpy(string, str[0]);
        }
        else
        {
            strcpy(string, str[2]);
        }
    }
    else    // 若第二句比第一句大
    {
        if (strcmp(str[1], str[2])) // 若第二句比第三句大
        {
            strcpy(string, str[1]);
        }
        else
        {
            strcpy(string, str[2]);
        }
    }
    printf("最大的句子是：%s\n", string);
    system("pause");
    return 0;
}