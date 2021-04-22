#include <stdio.h>
#include <windows.h>
#include <math.h>   // 使用pow()函数
// 输入一个十六进制数，输出十进制数
int get_d(char str[]);
int main()
{
    char str[10], c;
    int res, i = 0;
    printf("输入一个十六进制数：\n");
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F' || c >= '0' && c <= '9')
            str[i++] = c;
    }
    str[i] = '\0';
    res = get_d(str);
    printf("10进制为：%d\n", res);
    system("pause");
    return 0;
}

int get_d(char str[])
{
    int res = 0, len, k;
    len = strlen(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'F')
            k = str[i] - 55;
        else if (str[i] >= 'a' && str[i] <= 'f')
            k = str[i] - 87;
        else
            k = str[i] - 48;
        res += k * pow(16, len-i-1);
    }
    return res;
}