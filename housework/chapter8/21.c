#include <stdio.h>
#include <windows.h>
// 用指向指针的指针对n个整数排序并输出
void sort(int ** p, int n);
int main()
{
    int n, num[20], * pNum[20];
    int ** pp = pNum;     // 指针的指针，值就是地址
    printf("input n:\n");
    scanf("%d", &n);
    printf("input %d integer numbers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", num + i);
        pNum[i] = num + i;
    }
    sort(pp, n);
    for (int i = 0; i < 5; i++)
        printf("%4d", *pp[i]);
    printf("\n");
    system("pause");
    return 0;
}
void sort(int ** p, int n)
{
    int i, j;
    int t;
    // 用冒泡排序法
    for (i = 0; i < n; i++)
    {
        for (j = i + i; j < n; j++)
        {
            if (** (p + i) > ** (p + j))
            {
                t = ** (p + i);
                ** (p + i) = ** (p + j);
                ** (p + j) = t;
            }
        }
    }
}
