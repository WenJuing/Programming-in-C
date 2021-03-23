#include <stdio.h>
#include <windows.h>
// 输入A或a执行加法操作，输入B或b执行减法操作
void action1(int a, int b);
void action2(int a, int b);

int main()
{
    char ch;
    int a = 12, b = 12;
    ch = getchar();
    switch (ch) {
        case 'A':
        case 'a':action1(a, b);break;
        case 'B':
        case 'b':action2(a, b);break;
        default:printf("\a");break;
    }
    system("pause");
    return 0;
}
void action1(int a, int b)
{
    printf("a+b=%d\n", a + b);
}
void action2(int a, int b)
{
    printf("a*b=%d\n", a * b);
}