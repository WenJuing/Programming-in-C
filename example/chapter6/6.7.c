#include <stdio.h>
#include <windows.h>
// 用数字保存下面的菱形，并输出它
//   *  
//  * *
// *   *
//  * *
//   * 
int main()
{
    char c[][5] = {
        {' ',' ','*'},
        {' ','*',' ','*'},
        {'*',' ',' ',' ','*'},
        {' ','*',' ','*'},
        {' ',' ','*'}
    };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}