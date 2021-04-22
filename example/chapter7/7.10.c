#include <stdio.h>
#include <Windows.h>
// 输入10个数，求平均数
float get_aveg(float a[10]);
int main()
{
    float a[10];
    printf("输入10个数\n");
    for (int i = 0; i < 10; i++)
    {
        printf("第%d个数：", i+1);
        scanf("%f", &a[i]);
    }
    printf("平均数为%f\n", get_aveg(a));
    system("pause");
    return 0;
}

float get_aveg(float a[10])     // 不指定大小，也可写为a[]
{
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    return sum / 10;
}