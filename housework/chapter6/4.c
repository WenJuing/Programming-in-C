#include <stdio.h>
#include <windows.h>
// 一个已排序数组，现插入一个，要求按之前的排序规律再次排序好
int main()
{
    // t代表中间变量，n代表要插入的数
    int t, n;
    int a[11] = {-1,1,2,4,6,9,10,23,45,66};
    // 打印输出
    printf("目前已排序的数：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%-5d", a[i]);
    }
    printf("\n请输入要插入的数的值：");
    scanf("%d", &n);
    // 若输入的数大于数组里的任一元素，直接追加
    if (n > a[9])
    {
        a[10] = n;
    }  
    else
    {
        for (int i = 0; i < 10; i++)
        {
            // 若小于a[i]，a[i]（包括它）后的所有元素往后挪一位，a[i]位置给n
            if (n < a[i])
            {
                for (int j = 10; j > i; j--)
                {
                    a[j] = a[j-1];
                }
                a[i] = n;
                break;
            }
        }
    }
    // 打印输出
    printf("再次排序：");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}