#include <stdio.h>
#include <windows.h>
// 输出所有的水仙花数
// 水仙花数：1）3位数
//          2）各位数的三次方的和等于本身，类似于153 = 1^3 + 5^3 + 3^3
int main()
{
    // t:暂存个位数 r:暂存i
    int t = 0, sum, r;
    for (int i = 100; i <= 999; i++) // 水仙花数范围[100, 999]
    {
        r = i;
        sum = 0;
        for (int j = 0; j < 2; j++) // 循环两次获得十位数的三次方和个位数的三次方的和
        {
            t = i % 10; // 取个位
            sum += t * t * t;
            i /= 10;    // 去个位
        }
        sum += i * i * i;   // 此时i为百位数
        if (sum == r)
            printf("%d ", r);
        i = r;  // i的值已被破坏，故利用r恢复原值
    }
    printf("\n");
    // 程序改进
    // a表示百位数字，b表示十位数字，c表示个位数字
    int a, b, c;
    for (int i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if (a*a*a + b*b*b + c*c*c == i)
            printf("%d ", i);
    }
    printf("\n");
    system("pause");
    return 0;
}