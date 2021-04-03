#include <stdio.h>
#include <windows.h>
// 输出4×5矩阵
// 1  2  3  4  5
// 2  4  6  8  10
// 3  6  9  12 15
// 4  8  12 16 20
int main()
{
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=5; j++) {
            printf("%-5d", i*j);
            if (j%5 == 0) printf("\n");
        }
    }
    printf("--------------------------");
    // 加餐1（去掉某一行）
    int n;
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=5; j++,n++) {
            if (n%5 == 0) printf("\n");
            if (i==3 && j==1) break;
            printf("%-5d", i*j);
        }
    }
    printf("\n");
    printf("-------------------------\n");
    // 加餐2（去掉某一行的某一个）
    int n2 = 0;
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=5; j++,n2++) {
            if (n2%5 == 0) printf("\n");
            if (i==3 && j==1) continue;
            printf("%-5d", i*j);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}