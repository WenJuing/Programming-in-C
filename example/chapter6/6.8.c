#include <stdio.h>
#include <windows.h>
// 输入一个句子，统计有多少个单词，单词之间用空格区分
int main()
{
    int num = 0;
    char ch[100];

    puts("输入一串句子：");
    gets(ch);
    // 逐个遍历，直到这段字符串结束
    for (int i = 0; ch[i] != '\0'; i++)
    {
        // 是一个单词的条件：1）此字符不是空格 2）且下一个字符是空格或者结束符
        if (ch[i] != ' ')
        {
            if (ch[i+1] == ' ' || ch[i+1] == '\0')
            {
                num++;
            }
        }
    }
    printf("共有%d个单词\n", num);
    system("pause");
    return 0;
}