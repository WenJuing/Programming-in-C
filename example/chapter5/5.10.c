#include <stdio.h>
#include <windows.h>
#include <math.h>   // 导入sqrt(x) 求根号函数
// 求100~200的全部素数
int main()
{
    int i, j;
    for (i=100; i<=200; i++) {
        for (j=2; j<=(int)sqrt(i); j++) {
            if (i % j == 0) break;
        }
        if (j > (int)sqrt(i)) printf("%d ", i);
    }
    system("pause");
    return 0;
}