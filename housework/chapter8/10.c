#include <stdio.h>
#include <windows.h>
#include <stdlib.h> // 使用malloc()函数
// 5×5的矩阵：最大的放中心，四角放最小的四个
void show(int (*p)[5]);
void change(int * p);
int main()
{
    int a[5][5] = {
        {16,17,18,19,20},
        {1,2,3,4,5},
        {11,12,13,14,15},
        {6,7,8,9,10},
        {21,22,23,24,25}};
    show(a);
    change(&a[0][0]);
    printf("\n");
    show(a);
    system("pause");
    return 0;
}

void change(int * p)
{
    int t;
    int * pmax, * pmin;
    pmax = pmin = p;
    // 1）让pmax和pmin分别指向最大值和最小值
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (* (p + i * 5 + j) > * pmax) pmax = p + i * 5 + j;
            if (* (p + i * 5 + j) < * pmin) pmin = p + i * 5 + j;
        }
    }
    // pmax所指的值与中心元素交换
    t = * (p + 12);
    * (p + 12) = * pmax;
    * pmax = t;
    // pmin所指的值与左上角元素交换
    t = * p;
    * p = * pmin;
    * pmin = t;
    // 2）让pmin指向第二小的值
    pmin = p + 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // 第二小的值不等于最小值且小于其他值
            if (i == 0 && j == 0) continue;
            if (* pmin > * (p + i * 5 + j)) pmin = p + i * 5 + j;
        }
    }
    // pmin所指的值与右上角元素交换
    t = * (p + 4);
    * (p + 4) = * pmin;
    * pmin = t;
    // 3）让pmin指向第三小的值
    pmin = p + 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // 第三小的值不等于最小值和第二小的值且小于其他值
            if (i == 0 && j == 0 || i == 0 && j == 4) continue;
            if (* pmin > * (p + i * 5 + j)) 
                pmin = p + i * 5 + j;
        }
    }
    // pmin所指的值与左下角元素交换
    t = * (p + 20);
    * (p + 20) = * pmin;
    * pmin = t;
    // 4）让pmin指向第四小的值
    pmin = p + 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // 第四小的值不等于于最小值和第二小的值和第三小的值且小于其他值
            if (i == 0 && j == 0 || i == 0 && j == 4 || i == 4 && j == 0) continue;
            if (* pmin > * (p + i * 5 + j)) 
                pmin = p + i * 5 + j;
        }
    }
    // pmin所指的值与右下角元素交换
    t = * (p + 24);
    * (p + 24) = * pmin;
    * pmin = t;
}
void show(int (*p)[5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d", * (* (p + i) + j));
        }
        printf("\n");
    }
}