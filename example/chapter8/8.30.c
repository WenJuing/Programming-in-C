#include <stdio.h>
#include <windows.h>
#include <stdlib.h> // 使用malloc()函数
// 使用动态数组
void check(int * p);
int main()
{
    int * list;
    list = (int * )malloc(5 * sizeof(int));
    printf("输入5个学生的成绩：");
    for (int i = 0; i < 5; i++)
        scanf("%d", list + i);
    check(list);
    free(list);
    system("pause");
    return 0;
}
void check(int * p)
{
    for (int i = 0; i < 5; i++)
    {
        if (p[i] < 60)
            printf("%5d", p[i]);
    }
    printf("\n");
}