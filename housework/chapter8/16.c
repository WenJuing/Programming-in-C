#include <stdio.h>
#include <windows.h>
#include <math.h>
// 输入一个字符串，里面有数字和非数字，将连续的数字放到数组中，统计共有多少个整数
int save_num(int num[], char str[]);
int main()
{
    char str[50];
    int num[25], num_len;
    printf("input a string:\n");
    gets(str);
    num_len = save_num(num, str);
    printf("There are %d numbers in this line, they are:\n", num_len);
    for (int i = 0; num[i] != '\0'; i++)
        printf("%d  ", num[i]);
    printf("\n");
    system("pause");
    return 0;
}
int save_num(int num[], char str[])
{
    int i, t, w, temp_len, num_len = 0, temp[50];
    char * pS = str;
    while (*pS != '\0')
    {
        if (*pS >= '0' && *pS <= '9')
        {
            i = temp_len = 0;
            // 是数字就逐个存数字到临时数组
            while (*pS >= '0' && *pS <= '9')
            {
                temp[i] = *pS - 48;
                i++;
                temp_len++;
                pS++;
            }
            temp[i] = '\0';
            // 把临时数组里的数字转换成值存到数字数组
            i = t = 0;
            w = pow(10, temp_len - 1);
            while (*(temp + i) != '\0')
            {
                t += * (temp + i) * w;
                w /= 10;
                i++;
            }
            num[num_len] = t;
            num_len++;
        }
        num[num_len] = '\0';
        pS++;
    }
    return num_len;
}
