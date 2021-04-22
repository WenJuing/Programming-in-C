#include <stdio.h>
#include <windows.h>
// 写一个函数，将两个字符串连接
void join_arr(char string[], char arr_1[], char arr_2[]);

int main()
{
    char string[30], arr_1[15], arr_2[15];
    printf("输入两段字符串，将它们连接起来\n");
    printf("输入第一段：");
    gets(arr_1);
    printf("输入第二段：");
    gets(arr_2);
    join_arr(string, arr_1, arr_2);
    puts(string);
    system("pause");
    return 0;
}

void join_arr(char string[], char arr_1[], char arr_2[])
{
    int i = 0, j = 0;
    while (arr_1[i] != '\0')
        string[j++] = arr_1[i++];
    i = 0;
    while (arr_2[i] != '\0')
        string[j++] = arr_2[i++];
    string[j] = '\0';
}