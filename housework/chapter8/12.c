#include <stdio.h>
#include <windows.h>
#include <string.h>
#define N 10
// 用指针数组处理上一题目，字符串不等长
void sort(char * s[]);
int main()
{
    char * p[N], str[N][20];
    // 给指针数组赋值
    for (int i = 0; i < N; i++)
        p[i] = str[i];
    printf("输入10个等长的字符串：\n");
    for (int i = 0; i < N; i++)
        gets(str[i]);
    sort(p);
    // 遍历输出
    printf("排序后的结果：\n");
    for (int i = 0; i < N; i++)
        puts(str[i]);
    system("pause");
    return 0;
}
void sort(char * s[])
{
    int i, j, k;
    char temp[10];
    // 用冒泡法排序（从小到大）
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
}