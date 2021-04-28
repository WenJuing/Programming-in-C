#include <stdio.h>
#include <windows.h>
// 输出二维数组任一行任一列的值
int main()
{
    int a[4][5] = {
        {1,2,3,4,5},
        {2,4,6,8,10},
        {3,6,9,12,15},
        {4,8,12,16,20}};
    int (*p)[5], i, j;
    p = a;
    printf("输入行和列：");
    scanf("%d %d", &i, &j);
    printf("a[%d][%d]=%d", i, j, * (* (p + i) + j));
    printf("\n");
    system("pause");
    return 0;
}