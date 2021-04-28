#include <stdio.h>
#include <windows.h>
int main()
{
    int a[4] = {1,2,3,4};
    int ( * p)[4];
    p = &a;
    printf("%d\n", ( * p)[2]);
    system("pause");
    return 0;
}