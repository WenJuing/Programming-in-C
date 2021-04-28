#include <stdio.h>
#include <windows.h>
// 将若干个字符串按字母顺序由大到小输出
int main()
{
    char * str[] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
    char **p;   // 定义指针的指针
    for (int i = 0; i < 5; i++)
    {
        p = str + i;
        puts(*p);
    }
    system("pause");
    return 0;
}