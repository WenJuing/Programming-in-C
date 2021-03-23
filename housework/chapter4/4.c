#include <stdio.h>
#include <windows.h>
// 输入三个整数，输出其中的最大值
int main()
{
    int a, b, c, max;
    printf("please enter a, b, c:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) max = a > c ? a : c;
    else max = b > c ? b : c;
    printf("the max is %d\n", max); 
    system("pause");
    return 0;
}