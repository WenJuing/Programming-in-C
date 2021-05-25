#include <stdio.h>
#include <windows.h>
// 复制字符串的从第m个字符开始的全部字符到另一个字符串
void copy_nstr(char * p, char * p_main, int m);
int main()
{
    int m;
    char str[30], string[10];
    printf("输入一个字符串：");
    gets(str);
    printf("从第几个开始截取？");
    scanf("%d", &m);
    copy_nstr(string, str, m);
    printf("新字符：%s\n", string);
    system("pause");
    return 0;
}

void copy_nstr(char * p, char * p_main, int m)
{
    p_main += (m - 1);
    while (*p++ = *p_main++);   // 结束条件为'\0'，对应的ascll为0，即false
}