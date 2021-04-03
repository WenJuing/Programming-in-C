#include <stdio.h>
#include <windows.h>
// 用do...while语句计算1到100的和
int main()
{
    int sum;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 100);
    printf("%d\n", sum);
    system("pause");
    return 0;
}