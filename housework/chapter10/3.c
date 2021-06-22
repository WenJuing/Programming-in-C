#include <stdio.h>
#include <windows.h>
// 输入一串字符串（以!号结束），将其中的小写字母全部转为大写字母，然后输出到text.dat中保存
int main()
{   
    char ch;
    FILE * fp;
    fp = fopen("text.dat", "w+");
    printf("input a str(end by !):\n");
    while ((ch = getchar()) != '!')
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        putchar(ch);
        fputc(ch, fp);
    }
    fclose(fp);
    system("pause");
    return 0;
}