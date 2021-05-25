#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define N 10
// 将一数组的后m个调到前面来:1 2 3 4 5 - > 4 5 1 2 3 (m = 2)
void change(int * p, int m);
void change_pro(int * p, int m);    // 改善版
int main()
{
    int a[N], m;
    printf("输入10个整数：");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", a + i);
    }
    printf("要将后面几个调到前面？");
    scanf("%d", &m);
    change(a, m);
    for (int i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");
    system("pause");
    return 0;
}

void change(int * p, int m)
{
    // 用来暂时存储后面的要移动的m个整数
    int * lest_arr = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        * (lest_arr + i) = * (p + N - m + i);
    // 将前面的n-m个往后挪m位
    for (int i = N - 1; i >= m; i--)
        * (p + i) = * (p + i - m);
    // 将之前后面的m个放到前面
    for (int i = 0; i < m; i++)
        * (p + i) = * (lest_arr + i);
    free(lest_arr);
}
void change_pro(int * p, int m)
{
    int * pi, arr_end;
    arr_end = * (p + N - 1);    // 先保存最后个数
    for (pi = p + N - 1; pi > p; pi--)  // 整体往后移1位
        * pi = * (pi - 1);
    * p = arr_end;  // 将最后个赋值给第1个
    m--;
    if (m > 0) change_pro(p, m);    // 移动多少个就递归几次
}