#include <stdio.h>
#include <windows.h>
// 用while语句计算1到100的和
int main()
{
    int sum;
    int i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}