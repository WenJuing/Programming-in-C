#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    int year;
    double rate, increase;

    year = 10;
    rate = 0.07;
    increase = pow((1+rate),10);
    printf("十年后我国GDP增长了%.2f\n", increase);
    system("pause");
    return 0;
}