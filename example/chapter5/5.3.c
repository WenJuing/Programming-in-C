#include <stdio.h>
#include <windows.h>
// 用while和do...while语句的比较
int useWhile(int i);
int useDoWhile(int i);

int main()
{
    printf("useWhile(1)=%d\n", useWhile(1));    // 结果为55
    printf("useWhile(11)=%d\n", useWhile(11));  // 结果为0
    printf("useDoWhile(1)=%d\n", useDoWhile(1));    // 结果为55
    printf("useDoWhile(1)=%d\n", useDoWhile(11));   // 结果为11（do...whilt至少执行一次函数体）
    system("pause");
    return 0;
}
int useWhile(int i)
{
    int sum;
    while (i <= 10) {
        sum += i;
        i++;
    }
    return sum;
}
int useDoWhile(int i)
{
    int sum;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    return sum;
}