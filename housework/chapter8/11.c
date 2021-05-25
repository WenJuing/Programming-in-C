#include <stdio.h>
#include <windows.h>
#include <string.h>
#define N 10
// 在主函数输入10个等长字符串，用函数排序，在主函数输出
void sort(char (*p)[N]);
int main()
{
    char str[10][10];
    printf("输入10个等长的字符串：\n");
    for (int i = 0; i < N; i++)
        gets(str[i]);
    sort(str);    // 传入第0行的地址
    // 遍历输出
    printf("排序后的结果：\n");
    for (int i = 0; i < N; i++)
        puts(str[i]);
    system("pause");
    return 0;
}
void sort(char (*p)[N])
{
    int i, j, k;
    char temp[10];
    // 用选择法排序（从小到大）
    for (i = 0; i < N - 1; i++)
    {
        k = i;
        for (j = i + 1; j < N; j++)
            if (strcmp(*(p + j), *(p + k)) < 0)
                k = j;
        if (k != i)
        {
            strcpy(temp, *(p + i));
            strcpy(*(p + i), *(p + k));
            strcpy(*(p + k), temp);
        }
    }
}