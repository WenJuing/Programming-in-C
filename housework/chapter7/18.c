#include <stdio.h>
#include <windows.h>
// 给出年月日，计算该日是该年的第几天
int get_days(int y, int m, int d, int months[]);

int main()
{
    int y, m, d, days;
    int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    printf("请输入年、月、日：");
    scanf("%d %d %d", &y, &m, &d);
    days = get_days(y, m, d, months);
    printf("该日是该年的第%d天\n", days);
    system("pause");
    return 0;
}

int get_days(int y, int m, int d, int months[])
{
    int days = 0;
    // 判断闰年
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0 && y % 3200 != 0 || y % 172800 == 0)
        months[1] = 29;
    else
        months[1] = 28;
    // 累加月
    for (int i = 0; i < m; i++)
    {
        days += months[i];
    }
    days += d;
    return days;
}