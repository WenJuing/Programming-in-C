#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>     // 使用exit()函数
// 从键盘输入一些字符，并逐个把它们送到磁盘上去，直到用户输入一个#为止
int main()
{
    FILE * fp;
    char c, filename[10];
    printf("输入文件名：");
    gets(filename);
    if ((fp = fopen(filename, "w")) == NULL)   // 打开文件
    {
        printf("cannot open file!\n");
        exit(0);
    }
    printf("输入需要存储到磁盘里的字符（#结束）：");
    while ((c = getchar()) != '#')
    {
        fputc(c, fp);   // 磁盘文件输入数据
        putchar(c);
    }
    fclose(fp); // 关闭文件
    putchar(10);    // 换行
    system("pause");
    return 0;
}