#include <stdio.h>
#include <windows.h>
// 枚举
enum Color {red,yellow,blue,white,black};
int main()
{
    enum Color i, j, k, pri;
    int n = 0, loop;
    for (i = red; i <= black; i++)
    {
        for (j = red; j <= black; j++)
        {
            for (k = red; k <= black; k++)
            {
                if (i != j && i != k && j != k)
                {
                    n++;
                    printf("%-4d", n);
                    for (loop = 0; loop < 3; loop++)
                    {
                        switch (loop)
                        {
                            case 0:pri = i;break;
                            case 1:pri = j;break;
                            case 2:pri = k;break;
                            default:break;
                        }
                        switch (pri)
                        {
                            case red:printf("%-10s", "red");break;
                            case yellow:printf("%-10s", "yellow");break;
                            case blue:printf("%-10s", "blue");break;
                            case white:printf("%-10s", "white");break;
                            case black:printf("%-10s", "black");break;
                            default:break;
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
    system("pause");
    return 0;
}