#include <stdio.h>
#include <windows.h>
// 不使用strcat()函数将两端字符串连接起来
int main()
{
    char string[20];
    char string2[20];
    char str1[10];
    char str2[10];
    // i用于保存字符串1结束的位置
    int i, j;

    printf("输入字符串1：");
    gets(str1);
    printf("输入字符串2：");
    gets(str2);

    // 寻找字符串1的结束符
    for (i = 0; i < 10; i++)
    {        
        // 碰到结束符则结束（读完了）
        if (str1[i] == '\0')
            break;
        string[i] = str1[i];
    }
    for (j = 0; j < 10; j++, i++)
    {
        if (str2[j] == '\0')
            break;
        string[i] = str2[j];
    }
    puts(string);

    // 程序改进
    i = 0, j = 0;
    while (str1[j] != '\0')
        string2[i++] = str1[j++];
    j = 0;  // 注意，上条语句两边不能同时i++，因为这样等效于 i += 2
    while (str2[j] != '\0')
        string2[i++] = str2[j++];
    puts(string2);
    
    system("pause");
    return 0;
}