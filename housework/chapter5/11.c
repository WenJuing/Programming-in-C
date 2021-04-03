#include <stdio.h>
#include <windows.h>
#define H 100
// 一球从100m高度自有下落，每次下落反弹原高度的一半后再次落下
// 求第10次落地时共经多少米？第10次反弹多高？
float getAll(int n);    // 求第n次落地共经多少米
float getOnce(int n);   // 求第n次反弹多高
int main()
{
    printf("第10次落地共经%fm，第10次反弹高度为%fm\n", getAll(10), getOnce(10));
    system("pause");
    return 0;
}

float getAll(int n)
{
    float sum = 100, h = H * 1.0;
    for (int i = 0; i < n-1; i++)
    {
        sum += h;
        h /= 2;
    }
    return sum;
}

float getOnce(int n)
{
    float h = H * 1.0;
    for (int i = 0; i < n; i++)
    {
        h /= 2;
    }
    
    return h;
}
