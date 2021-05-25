#include <stdio.h>
#include <windows.h>
#include <string.h>
// 用指向指针的指针对5个字符串排序并输出
void sort(char ** p);
int main()
{
    char * p[] = {"china","canada","india","american","italy"};
    char ** pp = p;     // 指针的指针，值就是地址
    sort(pp);
    for (int i = 0; i < 5; i++)
        puts(pp[i]);
    system("pause");
    return 0;
}
void sort(char ** p)
{
    int i, j, k;
    char * t;
    for (i = 0; i < 4; i++)
    {
        k = i;
        for (j = i + 1; j < 5; j++)
            if (strcmp(* (p + j), * (p + k)) < 0)
                k = j;
        if (k != i)
        {
            t = * (p + i);
            * (p + i) = * (p + k);
            * (p + k) = t;
        }
    }
}
