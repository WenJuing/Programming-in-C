#include <stdio.h>
#include <windows.h>
// 通过指针变量输出整型数组a的10个元素
int main()
{
    int * p, a[10];
    printf("输入10个整数：");
    for (p = a; p < (a + 10); p++)
        scanf("%d", p);
    printf("\n");
    p = a;  // 假如把这行注销，会输出什么呢？
    // 输出
    for (int i = 0; i < 10; i++, p++)
        printf("%-5d", * p);
    printf("\n");
    system("pause");
    return 0;
}