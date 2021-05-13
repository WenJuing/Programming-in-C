#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>     // 使用exit()函数
// 将file_1.dat文件的内容复制到file_2.dat文件里
int main()
{
    FILE * fp_1, * fp_2;
    char c, r_filename[10], w_filename[10];
    printf("输入读入文件的名字：");
    gets(r_filename);
    if ((fp_1 = fopen(r_filename, "r")) == NULL)   // 打开文件1
    {
        printf("cannot open file!\n");
        exit(0);
    }
    printf("输入输出文件的名字：");
    gets(w_filename);
    if ((fp_2 = fopen(w_filename, "w")) == NULL)   // 打开文件2
    {
        printf("cannot open file!\n");
        exit(0);
    }
    while ((c = fgetc(fp_1)) != EOF)
    {
        fputc(c, fp_2);
    }
    fclose(fp_1);   // 关闭文件1
    fclose(fp_2);   // 关闭文件2
    putchar(10);    // 换行
    system("pause");
    return 0;
}