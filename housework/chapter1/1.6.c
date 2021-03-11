#include <stdio.h>
#include <windows.h>

int isMax(int a, int b, int c);

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = isMax(a,b,c);
    printf("Max is %d\n", max);
    system("pause");
    return 0;
}
int isMax(int a, int b, int c)
{
    if (a > b) {
        if (a > c) return a;
        else return c;
    } else {
        if (b > c) return b;
        else return c;
    }
}