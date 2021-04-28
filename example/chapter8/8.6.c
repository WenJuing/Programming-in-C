#include <stdio.h>
#include <windows.h>
// 有一个存有10个整数的数组，输出它的所有元素
// 方法一：下标法
// 方法二：通过数组名计算数组元素地址
// 方法三：用指针变量指向元素地址
void show_by_index(int arr[]);
void show_by_name(int * name);
void show_by_p(int * name);
int main()
{
    int arr[10], *p = arr;
    printf("输入10个整数：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("输入第%d个：", i + 1);
        scanf("%d", &arr[i]);
    }
    // 打印输出
    show_by_index(arr);
    show_by_name(arr);
    show_by_p(arr);
    system("pause");
    return 0;
}

void show_by_index(int arr[])
{
    printf("下标法    ：");
    for (int i = 0; i < 10; i++)
        printf("%5d", arr[i]);
    printf("\n");
}

void show_by_name(int * name)
{
    printf("通过数组名：");
    for (int i = 0; i < 10; i++)
        printf("%5d", * (name+i));
    printf("\n");
}
void show_by_p(int * name)
{
    printf("通过指针  ：");
    for (int * p = name; p < (name + 10); p++)
        printf("%5d", * p);
    printf("\n");
}