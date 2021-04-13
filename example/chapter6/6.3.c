#include <stdio.h>
#include <windows.h>
// 输入10个数，用数组保存，然后按从小到大的次序输出
int main()
{
    int t, a[10];

    printf("输入10个数\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("第%d个数为：", i+1);
        scanf("%d", &a[i]);
    }
    // 使用冒泡排序法按从小到大交换次序
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // 打印输出
    printf("从小到大：");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}