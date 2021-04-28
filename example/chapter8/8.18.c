#include <stdio.h>
#include <windows.h>
// 将字符串a复制到字符串b，输出b
int main()
{
    char a[] = "I love China!", b[20];
    int i;
    for (i = 0; a[i] != '\0'; i++)
        * (b + i) = * (a + i);
    * (b + i) = '\0';
    printf("a=%s\n", a);
    printf("b=%s\n", b);
    system("pause");
    return 0;
}