#include <stdio.h>
#include <windows.h>
// 字符数组的输入输出
int main()
{
    // 当以字符串的形式存储时，所占空间要比实际大1
    char c[6] = {"China"};  // 若6改成5，则报错
    printf("%s\n", c);
    // 也可以省略大括号，定义时省略长度则自动计算长度
    char c2[] = "China is beautiful.";
    puts(c2);
    char str[15], str1[5], str2[5], str3[5];
    // 输入时以空格字符代表一个字符串的结束，后面的输入则存储到下一个字符串变量
    scanf("%s", str);
    puts(str);
    scanf("%s%s%s", str1, str2, str3);
    puts(str1);
    puts(str2);
    puts(str3);
    // 可以观察上面的输出，从而发现系统存储的方式
    system("pause");
    return 0;
}