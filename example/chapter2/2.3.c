#include <stdio.h>
#include <windows.h>

// 判断是否是闰年
// 条件：1）能被4整除但不能被100整除是闰年。2）能被400整除是闰年

void isLeapYear(int begin, int end);
int main()
{
    isLeapYear(2000,2500);
    system("pause");
    return 0;
}
void isLeapYear(int begin, int end)
{
    int i;
    for (i=begin; i<=end; i++) {
        if (i%4 == 0 && i%100 != 0 || i%400 == 0) printf("%d ", i);
    }
}