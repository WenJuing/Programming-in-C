#include <stdio.h>
#include <windows.h>
// 输出100~200不能被3整除的数
int main()
{
    for (int i=100; i<=200; i++) {
        if (i%3 == 0) continue;
        printf("%d ", i);
        if (i%10 == 0) printf("\n");    // 适当换行
    }
    printf("\n");
    system("pause");
    return 0;
}