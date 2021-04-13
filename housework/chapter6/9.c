#include <stdio.h>
#include <windows.h>
#define N 15
// 15个数由大到小存放的数组，先输入一个数，用折半查找法找到该数在此数组中的第几个，不在则输出“无此数”
int main()
{
    char choice;
    int a[N], i, num, flag, sign, pos, mid, left, right;

    // 输入数据
    printf("为数组由小到大输入15个整数：\n");
    scanf("%d", &a[0]);
    i = 1;
    while (i < N) 
    {
        scanf("%d", &a[i]);
        if (a[i] > a[i-1])
            i++;
        else
            printf("输入的数字要比前一位大！\n");
    }
    
    // 打印输出
    for (i = 0; i < N; i++)
        printf("%-5d", a[i]);
    

    flag = 1;   // 控制找数字循环
    while (flag)
    {
        printf("输入要查找的数字：");
        scanf("%d", &num);
        if (num < a[0] || num > a[N-1]) // 数字超过范围
        {
            printf("数字超过范围！\n");
            continue;
        }
        left = 0;
        right = N -1;
        // 使用折半查找法查找该数字
        sign = 1;
        pos = -1;
        while (sign && left <= right)
        {
            mid = (left + right) / 2;
            if (num == a[mid])
            {
                pos = mid;
                printf("数字%d在该数组的第%d个位置\n", num, pos+1);
                sign = 0;
            }
            else if (num < a[mid])   // 数字在左半边
                right = mid - 1;
            else   // 数字在右半边
                left = mid + 1;
        }
        if (sign && pos)
            printf("找不到这个数字！\n");
        printf("继续查找？(Y/N)");
        fflush(stdin);  // 刷新缓冲区，防止读入回车（上一个sacnf的）
        scanf("%c", &choice);
        if (choice == 'N' || choice == 'n')
            flag = 0;
    }
    system("pause");
    return 0;
}