#include <stdio.h>
#include <windows.h>
// 将3×3的整型矩阵转置
void invert(int (*p)[3]);           // 方法一：参数为指向数组的指针
void invert_version_2(int * p);     // 方法二：参数为指向元素的指针
void show(int (*p)[3]);
int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Original array:\n");
    show(a);
    printf("Invert array:\n");
    invert(a);  // 传入第1行的地址
    show(a);
    printf("Invert array:\n");
    invert_version_2(&a[0][0]); // 传入第1行第1个元素的地址
    show(a);
    system("pause");
    return 0;
}

void invert(int (*p)[3])
{
    int t;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            t = * (* (p + i) + j);
            * (* (p + i) + j) = * (* (p + j) + i);
            * (* (p + j) + i) = t;
        }
    }
}
void invert_version_2(int * p)
{
    int t;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            t = * (p + i * 3 + j);
            * (p + i * 3 + j) = * (p + j * 3 + i);
            * (p + j * 3 + i) = t;
        }
    }
}
void show(int (*p)[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", * (* (p + i) + j));
        }
        printf("\n");
    }
}