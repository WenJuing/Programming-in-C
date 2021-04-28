#include <stdio.h>
#include <windows.h>
// 通过指针调用函数，输入1求大者，输入2求小者，输入3求和
int fun(int a, int b, int ( * p)(int, int));
int get_max(int a, int b);
int get_min(int a, int b);
int get_add(int a, int b);
int main()
{ 
    int a, b, n, res;
    printf("[1]求最大值\n");
    printf("[2]求最小值\n");
    printf("[3]求两者和\n");
    printf("先输入a和b：");
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    res = n == 1 ? fun(a, b, get_max) : 
          n == 2 ? fun(a, b, get_min) : 
                   fun(a, b, get_add);
    printf("结果：%d\n", res); // 通过指针变量调用函数
    system("pause");
    return 0;
}

int fun(int a, int b, int ( * p)(int, int))
{
    return ( * p)(a, b);
}

int get_max(int a, int b)
{
    return a > b ? a : b;
}

int get_min(int a, int b)
{
    return a < b ? a : b;
}

int get_add(int a, int b)
{
    return a + b;
}