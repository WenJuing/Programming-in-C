#include <stdio.h>
#include <windows.h>
// 用函数调用实现字符串的复制
void copy_string(char from[], char to[]);
void copy_string_pro(char * from, char * to);   // 改进版
void copy_string_pro_pro(char * from, char * to); // 终极版
int main()
{
    // a为字符指针变量，指向字符串的首个字符
    char * a = "I love China!", b[] = "You like a cat!";
    printf("a=%s\n", a);
    printf("b=%s\n", b);
    copy_string_pro_pro(a, b);
    printf("a=%s\n", a);
    printf("b=%s\n", b);
    system("pause");
    return 0;
}

void copy_string(char from[], char to[])
{
    // 常规方法
    for (; * from != '\0'; from++, to++)
        * to = * from;
    * to = '\0';
}

void copy_string_pro(char * from, char * to)
{
    // 先赋值后判断
    while ((* to = * from) != '\0')
    {
        to++;
        from++;
    };
}

void copy_string_pro_pro(char * from, char * to)
{
    // 当到结束符'\0'时，由于其ASCLL码为0，条件正好为假，结束循环
    while (* to++ = * from++);
}
