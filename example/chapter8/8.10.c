#include <stdio.h>
#include <windows.h>
#define N 10
// 通过指针方法用选择法以从大到小的方式对数组排序
void sort(int * p, int n);
int main()
{
    int a[N], * p = a;
    printf("please inter N integer numbers:");
    for (int i = 0; i < N; i++)
        scanf("%d", p++);
    p = a;
    sort(p, N);
    printf("the sorted array:");
    for (p = a; p < (a + N); p++)
        printf("%5d", * p);
    printf("\n");
    system("pause");
    return 0;
}
void sort(int * p, int n)
{
    // k代表最大值下标
    int i, j, k, t;
    // 用选择法排序
    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (* (p + j) > * (p + k))
                k = j;
        }
        if (k != i)
        {
            t = * (p + i);
            * (p + i) = * (p + k);
            * (p + k) = t;
        }
    }
}
