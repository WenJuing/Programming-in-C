#include <stdio.h>
#include <windows.h>
#include <string.h> // 使用strcmp()函数
// 输入3个字符串，按由小到大的顺序输出
void sort(char * p[]);
int main()
{
    char * str[3];
    printf("输入三个字符串：");
    scanf("%s", &str[0]);
    scanf("%s", &str[1]);
    scanf("%s", &str[2]);
    sort(str);
    puts(str[0]);
    puts(str[1]);
    puts(str[2]);
    system("pause");
    return 0;
}
void sort(char * p[])
{
    char * t;
    if (strcmp(*p, *(p + 1)) > 0)
    {
        t = *p;
        *p = * (p + 1);
        * (p + 1) = t;
    }
    if (strcmp(*p, *(p + 2)) > 0)
    {
        t = *p;
        *p = * (p + 2);
        * (p + 2) = t;
    }
    if (strcmp(*(p + 1), *(p + 2)) > 0)
    {
        t = * (p + 1);
        * (p + 1) = * (p + 2);
        * (p + 2) = t;
    }
}