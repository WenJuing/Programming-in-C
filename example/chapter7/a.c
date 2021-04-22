#include <stdio.h>
#include <Windows.h>
// 通过extern使其他文件可使用本文件的变量
extern int a;
extern int b;
extern void add(int a, int b);
int main()
{
    add(a, b);
    system("pause");
    return 0;
}


