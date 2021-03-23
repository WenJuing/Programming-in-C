#include <stdio.h>
#include <windows.h>
// 通过if-elseif求分段函数的解
int main()
{
    int x;
    scanf("%d", &x);
    if (x < 0) x = -1;
    else if (x == 0) x = 0;
    else x = 1;
    printf("%d\n", x);
    system("pause");
    return 0;
}