#include <stdio.h>
#include <windows.h>

int main()
{
    char a;
    printf("请输入一个大写字母：");
    scanf("%c", &a);
    a += 32;
    printf("对应的小写字母为：%c\n", a);
    system("pause");
    return 0;
}