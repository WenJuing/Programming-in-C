#include <stdio.h>
#include <windows.h>
// 输出1000之内的所有完数
// 完数：其值恰好等于它的因子之和，例如：6的因子为1，2，3，恰好6 = 1 + 2 + 3（不考虑负因子）
int main()
{
    // data代表数，factor代表因子，sum代表因子和
    int data, factor, sum;

    for (data = 2; data <= 1000; data++)
    {
        // 1是所有数的因子，故总和先为1
        sum = 1;
        for (factor = 2; factor <= data/2; factor++)
        {
            // 判断能否被整除
            if (data % factor == 0)
                sum += factor;
        }
        // 判断是否为完数
        if (sum == data)
        {
            printf("%d its factors are 1, ", sum);
            // 再次循环输出完数的所有因子
            for (factor = 2; factor <= data/2; factor++)
            {
                if (data % factor == 0)
                    printf("%d, ", factor);
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}