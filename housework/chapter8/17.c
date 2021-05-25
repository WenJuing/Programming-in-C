#include <stdio.h>
#include <windows.h>
// 写一个函数实现strcmp()函数的功能，返回值为第一个不同字母的差值
int str_cmp(char * p1, char * p2);
int main()
{
    char str1[10], str2[10];
    printf("输入两个字符串：\n");
    gets(str1);
    gets(str2);
    printf("%s比%s大%d\n", str1, str2, str_cmp(str1, str2));    
    system("pause");
    return 0;
}
int str_cmp(char * p1, char * p2)
{
    int i = 0;
    while (* (p1 + i) == * (p2 + i))
    {
        if (* (p1 + i++) == '\0') return(0);
    }
    return * (p1 + i) - * (p2 + i);
}