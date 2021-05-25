#include <stdio.h>
#include <windows.h>
// 输入月号，输出对应的英文月名，用指针数组实现。比如输入3，输出March
int main()
{
    char * p[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"};
    int num;
    printf("输入月号：");
    scanf("%d", &num);
    printf("%s\n", * (p + num - 1));
    system("pause");
    return 0;
}