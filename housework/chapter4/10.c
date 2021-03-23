#include <stdio.h>
#include <windows.h>
// 使用if和switch计算奖金
#define r1 0.1
#define r2 0.075
#define r3 0.05
#define r4 0.03
#define r5 0.015
#define r6 0.01
double useIf(double profit);
double useSwitch(double profit);
int main()
{
    double profit, bonus;
    printf("根据利润计算奖金：请输入奖金：");
    scanf("%lf", &profit);
    // printf("%.2f\n", useIf(profit));
    printf("%.2f\n", useSwitch(profit));
    system("pause");
    return 0;
}
double useIf(double profit)
{
    double bonus;
    double full_1e5 = r1 * 1e5;
    double full_2e5 = full_1e5 + 1e5 * r2;
    double full_4e5 = full_2e5 + 2e5 * r3;
    double full_6e5 = full_4e5 + 2e5 * r4;
    double full_10e5 = full_6e5 + 4e5 * r5;
    if (profit <= 1e5) bonus = profit * r1;
    else if (profit <= 2e5) bonus = full_1e5 + (profit - 1e5) * r2;
    else if (profit <= 4e5) bonus = full_2e5 + (profit - 2e5) * r3;
    else if (profit <= 6e5) bonus = full_4e5 + (profit - 4e5) * r4;
    else if (profit <= 10e5) bonus = full_6e5 + (profit - 6e5) * r5;
    else bonus = full_10e5 + (profit - 10e5) * r6;
    return bonus;
}
double useSwitch(double profit)
{
    double bonus;
    double full_1e5 = r1 * 1e5;
    double full_2e5 = full_1e5 + 1e5 * r2;
    double full_4e5 = full_2e5 + 2e5 * r3;
    double full_6e5 = full_4e5 + 2e5 * r4;
    double full_10e5 = full_6e5 + 4e5 * r5;
    int range_num = (int)(profit / 1e5);
    switch (range_num)
    {
    case 0:
        bonus = profit * r1;
        break;
    case 1:
        bonus = full_1e5 + (profit - 1e5) * r2;
        break;
    case 2:
    case 3:
        bonus = full_2e5 + (profit - 2e5) * r3;
        break;
    case 4:
    case 5:
        bonus = full_4e5 + (profit - 4e5) * r4;
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        bonus = full_6e5 + (profit - 6e5) * r5;
        break;
    default:
        bonus = full_10e5 + (profit - 10e5) * r6;
        break;
    }
    return bonus;
}