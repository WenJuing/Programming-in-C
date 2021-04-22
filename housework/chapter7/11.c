#include <stdio.h>
#include <windows.h>
// 写一个函数，用起泡法对输入的10个字符按由小到大排序
void sort(char str[]);

int main()
{
    char str[50];
    printf("输入一个字符串：\n");
    gets(str);
    sort(str);
    puts(str);
    printf("\n");
    system("pause");
    return 0;
}

void sort(char str[])
{
    char t;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }    
        }
    }
}