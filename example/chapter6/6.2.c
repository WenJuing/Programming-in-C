#include <stdio.h>
#include <windows.h>
// 用一个数组存储前25个斐波那契数列
int main()
{
    int a[25] = {1, 1};
    for (int i = 2; i < 25; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    // 打印输出
    for (int i = 0; i < 25; i++)
    {
        // 每输出5个换行
        if (i % 5 == 0)
            printf("\n");
        printf("%-10d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}