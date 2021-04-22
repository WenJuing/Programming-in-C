#include <stdio.h>
#include <Windows.h>
// 用选择法对10个数从小到大排序
void sort(int a[], int n);
int main()
{
    int a[10];
    printf("输入10个数\n");
    for (int i = 0; i < 10; i++)
    {
        printf("第%d个数：", i+1);
        scanf("%d", &a[i]);
    }
    sort(a, 10);
    // 打印输出
    for (int i = 0; i < 10; i++)
    {
        printf("%-5d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

void sort(int a[], int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

        }
    }
}