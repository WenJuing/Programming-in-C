#include <stdio.h>
#include <windows.h>
// 输出成绩等级
int main()
{
    int g, r;
    printf("enter grade: ");
    scanf("%d", &g);
    r = g / 10;
    switch (r)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;    
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("E\n");
        break;
    }
    system("pause");
    return 0;
}