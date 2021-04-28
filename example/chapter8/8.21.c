#include <stdio.h>
#include <windows.h>
// 改变指针变量的值
int main()
{
    char * p = "I love China!";
    char * format = "%s\n";
    char format2[] = "%s\n";
    p += 7;
    printf("%s\n", p);
    printf(format, p);  // 字符指针变量可充当格式字符串的作用
    printf(format2, p);  
    system("pause");
    return 0;
}