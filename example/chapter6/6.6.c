#include <stdio.h>
#include <windows.h>
// 初始化一个字符数字，然后逐个输出每个字符
int main()
{
    char c[] = {'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.'};
    for (int i = 0; i < 15; i++)
    {
        printf("%c", c[i]);
    }
 
    printf("\n");
    system("pause");
    return 0;
}