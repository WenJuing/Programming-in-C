#include <stdio.h>
#include <windows.h>
// 使用指针的指针
int main()
{
    int a[5] = {1,3,5,7,9};
    int * num[] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
    int **p;
    p = num;
    for (int i = 0; i < 5; i++)
        printf("%3d", **p++);
    printf("\n");
    system("pause");
    return 0;
}