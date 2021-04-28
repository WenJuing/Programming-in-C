#include <stdio.h>
#include <windows.h>
// 用指针输出二维数组的值
int main()
{
    int a[4][5] = {
        {1,2,3,4,5},
        {2,4,6,8,10},
        {3,6,9,12,15},
        {4,8,12,16,20}};
    int * p;
    for (p = a[0]; p < a[0] + 20; p++)
    {
        if ((p - a[0]) % 5 == 0) printf("\n");
        printf("%5d", * p);
    }
    printf("\n");
    system("pause");
    return 0;
}