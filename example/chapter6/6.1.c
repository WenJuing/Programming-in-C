#include <stdio.h>
#include <windows.h>
// 对10个数组元素依次赋值为0,1,2,3,4,5,6,7,8,9,要求按逆序输出
int main()
{
    int a[10];
    for (int i = 1; i <= 10; i++)
    {
        printf("请输入第%d个元素：", i);
        scanf("%d", &a[i-1]);
    }
    printf("逆序输出为：");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}