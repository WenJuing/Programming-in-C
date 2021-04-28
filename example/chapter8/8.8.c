#include <stdio.h>
#include <windows.h>
// 将数组的n个元素倒置存放
void invert(int a[], int n);
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The original array:\n");
    for (int i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    invert(a, 10);

    printf("The array has been inverted:\n");
    for (int i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    system("pause");
    return 0;
}

void invert(int * p, int n)
{
    int i, j, t;
    for (i = 0, j = n - i - 1; i <= n / 2; i++, j--)
    {
        t = * (p + i);
        * (p + i) = * (p + j);
        * (p + j) = t;
    }
}