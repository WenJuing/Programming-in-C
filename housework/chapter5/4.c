#include <stdio.h>
#include <windows.h>
// 输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数
int main()
{
    char ch;
    // 用来存放每种类型的个数
    int letter = 0, blank = 0, num = 0, other = 0;
    while ((ch = getchar()) != '\n')
    {
        // if (isalpha(ch) != 0)
        if (ch >= 'a' && ch <='z' || ch >= 'A' && ch <= 'Z')
        {
            letter++;
        }
        // else if (isblank(ch) != 0)
        else if (ch == ' ')
        {
            blank++;
        }
        // else if (isdigit(ch) != 0)
        else if (ch >= '1' && ch <= '9')
        {
            num++;
        }
        else
        {
            other++;
        }
        printf("%c", ch);
    }
    printf("经统计有英文字母%d个，空格%d个，数字%d个，其他字符%d个\n", letter, blank, num, other);
    system("pause");
    return 0;
}