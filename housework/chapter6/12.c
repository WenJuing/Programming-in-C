#include <stdio.h>
#include <windows.h>
// 输入一段密文，输出明文，下小写可转化，其他字符不变
// 转化关系：密文 = (26 - 明文 + 1) 比如：明文A -> 密文Z
int main()
{
    char ch[80], tran[80], i, j, n;

    printf("输入一段密文：\n");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            tran[i] = 27 - (ch[i] - 96) + 96;
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            tran[i] = 27 - (ch[i] - 64) + 64;
        }
        else
            tran[i] = ch[i];
    }

    printf("原文：\n");
    for (j = 0; j < i; j++)
    {
        printf("%c", tran[j]);
    }
    printf("\n");
    system("pause");
    return 0;
}