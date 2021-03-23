#include <stdio.h>
#include <windows.h>
// 判断输入的年份是否是闰年
int main()
{
    int year;
    printf("Please enter a year:");
    scanf("%d", &year);
    year % 4 == 0 && year % 100 != 0 || year % 100 == 0 ? 
    printf("%d是闰年\n", year) : printf("%d不是闰年\n", year);
    system("pause");
    return 0;
}