#include <stdio.h>
#include <Windows.h>
// 考察静态局部变量的值
void f();
int main()
{
    f();
    f();
    f();
    system("pause");
    return 0;
}

void f()
{   
    int a = 1;
    static int c = 1;
    printf("%d\n", a + c);
    a += 1;
    c += 1;
}