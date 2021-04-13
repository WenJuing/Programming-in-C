#include <stdio.h>
#include <windows.h>
// 实现将str2中的全部字符（包括'\0'，后面的不复制）复制到str1中，要求不使用strcpy()函数
int main()
{
    char str1[20];
    char str2[20];
    puts("输入第一个字符串：");
    gets(str2);
    for (int i = 0; i < 20; i++)
    {
        if (str2[i] == '\0')
        {
            // 把'\0'也复制过来
            str1[i] = str2[i];
            break;
        }
        str1[i] = str2[i];
    }
    printf("第二个字符串为：%s\n", str1);

    // 程序改进
    for (int i = 0; i <= strlen(str2); i++) // strlen()不算入'\0'
        str1[i] = str2[i];
    printf("第二个字符串为：%s\n", str1);

    system("pause");
    return 0;
}