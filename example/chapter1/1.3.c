#include <stdio.h>
#include <windows.h>

int isMax(int a, int b);
int main()
{
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = isMax(a,b);
    printf("Max = %d\n", max);
    system("pause");
    return 0;
}
int isMax(int a, int b)
{
    if (a > b) return a;
    if (a < b) return b;
    if (a = b) return a;
}