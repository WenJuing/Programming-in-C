#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// 使用malloc()和free()开辟和释放内存空间
int * my_new(int n);
void my_free(int * p);
int main()
{
    int * p = my_new(10);
    my_free(p);
    system("pause");
    return 0;
}
int * my_new(int n)
{
    return (int*)malloc(sizeof(int) * n);
}
void my_free(int * p)
{
    free(p);
    printf("释放成功！\n");
}