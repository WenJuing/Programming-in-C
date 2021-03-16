#include <stdio.h>
#include <windows.h>

int main()
{
    // 情况一
    char c1, c2;
    c1 = 97;
    c2 = 98;
    printf("c1=%c,c2=%c\n", c1, c2);    // a b
    printf("c1=%d,c2=%d\n", c1, c2);    // 97 98
    // 情况二：c1和c2超出字符的最大范围（-128~127），第一位进位由0变1，则数有正变负
    c1 = 197;
    c2 = 198;
    printf("c1=%c,c2=%c\n", c1, c2);    // ? ?
    printf("c1=%d,c2=%d\n", c1, c2);    // -59 -58
    // 情况三：尽管c1和c2没有超过整数范围，但转成字符型和情况二相同
    int C1, C2;
    C1 = 197;
    C2 = 198;
    printf("c1=%c,c2=%c\n", C1, C2);    // ? ?
    printf("c1=%d,c2=%d\n", C1, C2);    // -59 -58
    system("pause");
    return 0;
}