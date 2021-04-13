#include <stdio.h>
#include <windows.h>
// 输出以下图案：
/* 
*****
 *****
  *****
   *****
    ***** 
*/
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // 输出空格
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // 输出星星
        for (int k = 0; k < 10; k++)
        {
            if (k % 2 != 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}