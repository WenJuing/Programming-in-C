#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define N 5
// 从键盘输入若干行字符，存入n_row_str.dat中，读出内容，并将其中的小写字母转换为大写字母输出
int main()
{
    char str[N][30];
    char ch;
    FILE * fp = fopen("n_row_str.dat", "w+");

    // 写入
    printf("input %d row str:\n", N);
    for (int i = 0; i < N; i++)
    {
        gets(str[i]);
        fputs(str[i], fp);
        fputc('\n', fp);
    }
    fclose(fp);
    // 读取
    if ((fp = fopen("n_row_str.dat", "r")) == NULL)
        printf("no such file!!\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        putchar(ch);
    }
    printf("\n");
    system("pause");
    return 0;
}