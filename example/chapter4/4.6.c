#include <stdio.h>
#include <windows.h>
// 通过switch求不同评级对应的分数
int main()
{
    char ch;
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':
        printf("85~100分\n");
        break;
    case 'B':
        printf("70~84分\n");
        break;
    case 'C':
        printf("60~69分\n");
        break;
    case 'D':
        printf("0~59分\n");
        break;
    default:
        printf("输入错误！\n");
        break;
    }
    system("pause");
    return 0;
}