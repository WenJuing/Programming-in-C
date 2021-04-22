#include <stdio.h>
#include <windows.h>
// 写一个函数，输出字符串中最长的单词
int get_begin_index(char str[]);    // 获取最长单词的起始下标
int is_alpha(char a);   // 判断当前字符是否是字母
int main()
{
    char str[50];
    printf("输入一个字符串：\n");
    gets(str);
    printf("最长的单词是：\n");
    for (int i = get_begin_index(str); is_alpha(str[i]); i++)
    {
        putchar(str[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

int is_alpha(char a)
{
    if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
        return 1;
    else
        return 0;
}

int get_begin_index(char str[])
{
    // 分别代表最大单词长度、当前单词长度、最大单词下标、当前单词起始下标、单词是否开始（0未开始，1开始）
    int max_len = 0, cur_len = 0, max_index, begin_index, flag = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // 当前是字母
        if (is_alpha(str[i]))
        {
            // 单词未开始
            if (!flag)
            {
                flag = 1;
                begin_index = i;
            }
            // 单词已开始
            else
                cur_len++;
        }
        // 当前不是字母，代表单词结束，进行长度判断
        else
        {
            flag = 0;
            if (cur_len >= max_len)
            {
                max_len = cur_len;
                max_index = begin_index;
                cur_len = 0;    // 单词长度归零
            }
        }
    }
    return max_index;
}