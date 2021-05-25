#include <stdio.h>
#include <windows.h>
void show_lest_number(int * p, int n);
// 一圈人报数，123重复报数，报到3的人退出，最后一个人是第几个？
int main()
{
    int a[50], n, * p;
    printf("输入人数：");
    scanf("%d", &n);
    // 赋值，值为号位
    p = a;
    for (int i = 0; i < n; i++)
        * (p + i) = i + 1;
    show_lest_number(a, n);
    system("pause");
    return 0;
}

void show_lest_number(int * p, int n)
{
    // len代表当前数组有效长度, signal代表123123...报数的号码
    int len = n, signal = 0, i, * p_t;
    while (len > 1)     // 人数大于1则一直报数
    {
        for (i = 0; i < n; i++)
        {
            if (* (p + i) != 0) signal++;
            if (signal == 3)    // 报到3的设置成0，人数减少，重新报数
            {
                * (p + i) = 0;
                signal = 0;
                len--;
            }
        }
    }
    // 找到最后一人的下标
    p_t = p;
    while ( * p_t == 0) p_t++; 
    printf("最后剩下的一人是%d号\n", * p_t);
}