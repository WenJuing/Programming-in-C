#include <stdio.h>
#include <windows.h>
// 用选择法对10个整数排序
// 选择法：1）第1个和第2~9个比，其中最小的（且比第1个还小）与第1个交换，否则不交换
//  2）第2个和第3~9个比...
int main()
{
    int i, j, min, t, a[10];
    // 赋初始值
    printf("输入10个整数\n");
    for (i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // 先输出一遍
    printf("原始成员队形为：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%-5d", a[i]);
    }
    printf("\n");
    // 只需比较到前9个
    for (i = 0; i < 9; i++)
    {
        min = i;
        for (j = i+1; j < 10; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        // 当前的与最小的交换
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    // 再次打印输出
    printf("排序成员队形为：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%-5d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}