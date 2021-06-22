#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
// 定义一个结构体变量（包括年、月、日），计算该日在本年中是第几天
typedef struct Data {
    int year;
    int month;
    int day;
} Data;
bool isLeap(int year);
void count_days(Data data);
int main()
{
    Data data = {2008, 8, 8};
    count_days(data);
    system("pause");
    return 0;
}

bool isLeap(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else
        return false;
}
void count_days(Data data)
{
    int all = 0;
    int mon_arr[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};
    // 累加月
    for (int i = 1; i < data.month; i++)
    {
        // 若该年是闰年且是2月
        if (i == 2 && isLeap(data.year))
        {
            all += mon_arr[i] + 1;
        }
        else
        {
            all += mon_arr[i];
        }
    }
    all += data.day;
    printf("%d-%d-%d是本年的第%d天\n", data.year, data.month, data.day, all);
}