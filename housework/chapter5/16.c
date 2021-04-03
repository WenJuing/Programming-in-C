#include <stdio.h>
#include <windows.h>
// 输出以下图案：
/**
   *
  ***
 *****
*******
 *****
  ***
   * 
**/
int main()
{
    // n 第n行  t 打印字符个数
    int n = 1, t = 4;
    while (n <= 7)   // 每一列
    {
        for (int i = 1; i <= t; i++) // 每一行
        {
            if (i <= 7-t)
                printf(" ");
            else
                printf("*");
        }
        n++;
        if (n <= 4)
        {
            t++;
        }
        else
        {
            t--;
        }
        printf("\n");
    }
    system("pause");
    return 0;
}