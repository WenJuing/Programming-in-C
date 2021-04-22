#include <stdio.h>
#include <Windows.h>
// 输出1到5的阶乘
void f();
int main()
{
    f();
    f();
    f();
    f();
    f();
    system("pause");
    return 0;
}

void f()
{
    static int c = 1, f = 1;
    printf("%d!=%d\n", c, f);
    c += 1;
    f *= c;
}