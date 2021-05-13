#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>     // 使用exit()函数
#include <string.h>
#define N 3
// 从键盘输入若干个字符串，排序后保存到磁盘，再输出
int main()
{
    FILE * fp;
    char str[N][10];
    char temp[20];
    int i, j, k;
    printf("Enter 3 strings：\n", N);
    for (i = 0; i < N; i++)
    {
        gets(str[i]);
    }
    // 用选择法从小到大对字符串排序
    for (i = 0; i < N-1; i++)
    {
        k = i;
        for (j = i + 1; j < N; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
                k = j;
        }
        if (k != i)
        {
            strcpy(temp, str[i]);
            strcpy(str[i], str[k]);
            strcpy(str[k], temp);    
        }

    }
    // 将字符串数组写入磁盘
    if ((fp = fopen("./sorted_str.dat", "w")) == NULL)
    {
        printf("cannot open file!\n");
        exit(0);
    }
    for (i = 0; i < N; i++)
    {
        fputs(str[i], fp);
        fputs("\n", fp);
    }
    fclose(fp);
    // 从磁盘读出数据
    if ((fp = fopen("sorted_str.dat", "r")) == NULL)
    {
        printf("cannot open file!\n");
        exit(0);
    }
    printf("The new sequence:\n");
    i = 0;
    while (fgets(str[i], 10, fp) != NULL)
    {
        printf("%s", str[i]);
        i++;
    }
    fclose(fp);
    putchar(10);
    system("pause");
    return 0;
}