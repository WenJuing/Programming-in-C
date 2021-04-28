#include <stdio.h>
#include <windows.h>
// 通过指针变量将字符串a复制到字符串b，输出b
int main()
{
    char a[] = "I love China!", b[20];
    char * p1, * p2;
    for (p1 = a, p2 = b; * p1 != '\0'; p1++, p2++)
        * p2 = * p1;
    * p2 = '\0';
    printf("a=%s\n", a);
    printf("b=%s\n", b);
    system("pause");
    return 0;
}