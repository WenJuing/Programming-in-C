#include <stdio.h>
#include <windows.h>
#include <string.h> // 使用字符串函数
// 字符串函数
int main()
{
    char str1[30] = "People's Republic of ";
    char str2[] = "China";

    // strcat(str1,str2)字符串连接函数。将str2接到str1后面，并返回str1的地址
    puts(strcat(str1, str2));

    // strcpy(str1,str2,n)字符串复制函数。将str2复制到str1
    puts(strcpy(str1, str2));

    // strncpy(str1,str2,n)字符串复制函数。将str2复制到str1，n代表复制前n个字符（可选）
    puts(strncpy(str1, "aabbcc", 3));

    // strcmp(str1,str2)字符串比较函数。返回大于0，前者大；返回小于0.后者大；返回等于0，相等
    if (strcmp("abc","aaa") > 0)
    {
        printf("字符串abc比字符串aaa大\n");
    }
    else
    {
        printf("字符串abc比字符串aaa小\n");
    }

    // strlen(str)测字符串长度函数。注意：'\0'不计入
    printf("china的长度为%d\n", strlen("china"));

    // strlwr(str)全小写。strupr(str)全大写
    char ch1[] = "China", ch2[] = "Good";
    puts(strlwr(ch1));
    puts(strupr(ch2));

    system("pause");
    return 0;
}