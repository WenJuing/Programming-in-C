#include <stdio.h>
#include <windows.h>
// 输入一个字符串，按反序存放
void invert_str(char arr[]);

int main()
{
    char str[30];

    printf("输入一段字符串：\n");
    gets(str);
    invert_str(str);
    puts(str);

    system("pause");
    return 0;
}

void invert_str(char arr[])
{
    int t, len = strlen(arr);
    for (int i = 0; i <= len / 2; i++)
    {
        t = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = t;
    }
    arr[len] = '\0';
}