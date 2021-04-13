#include <stdio.h>
#include <windows.h>
// 求一个3×3的整型矩阵对角线元素之和
int main()
{
    int a[3][3];
    printf("生成一个3×3的矩阵，并求对角元素之和\n");
    for (int i = 0; i < 3; i++)
    {
        printf("请输入第%d列的三个值：", i+1);
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    printf("主对角元素之和为：%d\n", a[0][0]+a[1][1]+a[2][2]);
    printf("副对角元素之和为：%d\n", a[0][2]+a[1][1]+a[2][0]);
    system("pause");
    return 0;
}