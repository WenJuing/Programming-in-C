#include <stdio.h>
#include <windows.h>
// 输入大写字母，然后转换为小写字母
int main()
{
    char ch;
    scanf("%c", &ch);
    ch > 'A' && ch < 'Z' ? printf("%c\n", ch + 32) : printf("%c\n", ch);
    system("pause");
    return 0;
}