#include <stdio.h>
#include <windows.h>
// 译密码，输入一串字母，变成密码。
// 规则：a -> e, A -> E, W -> A...（明文加4变密文）
int main()
{
    char ch;
    ch = getchar();
    while (ch != '\n') 
    {
        if (ch>'z' || ch<'a' && ch>'Z' || ch<'A') // 若字符不在字母范围，则原样输出
        {
            ch = ch;
        }
        else if (ch+4>'Z' && ch+4<'a' || ch+4>'z') // 若字母加4后超过范围，则需减24后加4
        {
            ch -= 22;
        }
        else 
        {
            ch += 4;
        }
        printf("%c", ch);
        ch = getchar();
    }
    printf("\n");
    // 程序改进
    char c;
    while ((c = getchar()) != '\n') 
    {
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')   // 字符在字母范围，则先加4
        {
            c += 4;
            if (c > 'Z' && c < 'a' || c > 'z')   // 加4后超过范围，则减26
            {
                c -= 26;
            }
        }
        printf("%c", c);
    }
    printf("\n");
    system("pause");
    return 0;
}
