#include <stdio.h>
#include <windows.h>
// 猴子吃桃问题。每天吃剩下的一半加1个，第十天还剩1个，问原来有多少个？
int main()
{
    // n 天数  left 吃完剩下的个数
    int n, left = 1;
    for (n = 0; n < 9; n++)    // 逆推法，left = (left + 1) * 2
    {
        left = (left + 1) * 2;
    }
    printf("原来有%d个\n", left);
    system("pause");
    return 0;
}