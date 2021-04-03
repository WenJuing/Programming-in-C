#include <stdio.h>
#include <windows.h>
// 求(1 + 2 + ... + 100) + (1^2 + 2^2 + ... + 50^2) + (1/1 + 1/2 + ... + 1/10)
int main()
{
    double S1 = 0.0, S2 = 0.0, S3 = 0.0;
    for (int i = 1; i <= 100; i++)
    {
        S1 += i;
        if (i <= 50)
        {
            S2 += i * i;
        }
        if (i <= 10)
        {
            S3 += 1.0/i;
        }
    }
    printf("(1 + 2 + ... + 100) + (1^2 + 2^2 + ... + 50^2) + (1/1 + 1/2 + ... + 1/10) = %lf\n", S1 + S2 + S3);
    system("pause");
    return 0;
}