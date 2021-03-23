#include <stdio.h>
#include <windows.h>
// 输入4个整数，由小到大输出
int main()
{
    int a, b, c, d, t;
    printf("输入4个整数，由小到大输出：");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int arr[] = {a, b, c, d};
    // 冒泡排序法
    for (int i=0; i<4; i++) {
        for (int j=i; j<4-i; j++) {
            if (arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (int i=0; i<4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}