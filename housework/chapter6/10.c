#include <stdio.h>
#include <windows.h>
// 从一个文本读取数据，统计其大写字母、小写字母、数字、空格以及其他字符的个数
int main()
{
    char text[3][80];
    int upp, low, num, blank, other;
    upp = low = num = blank = other = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("输入第%d行数据：\n", i+1);
        gets(text[i]);
        for (int j = 0; j < 80 && text[i][j] != '\0'; j++)
        {
            if (text[i][j] >= 'A' && text[i][j] <= 'Z')
                upp++;
            else if (text[i][j] >= 'a' && text[i][j] <= 'z')
                low++;
            else if (text[i][j] >= '0' && text[i][j] <= '9')
                num++;
            else if (text[i][j] == ' ')
                blank++;
            else 
                other++;
        }
    }

    printf("大写字母%d个\n小写字母%d个\n数字%d个\n空格%d个\n其他字符%d个\n", upp, low, num, blank, other);
    system("pause");
    return 0;
}