#include <stdio.h>
#include <windows.h>
#include <string.h>  // 使用strcmp()函数
// 将若干个字符串按字母顺序由大到小输出
void sort_arr(char * str[], int n);
void show_arr(char * str[], int n);
int main()
{
    // 指针数组，每个元素存放一个字符串成员的首字符的地址
    char * str[] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
    puts("-----Original array-----");
    show_arr(str, 5);
    sort_arr(str, 5);
    puts("-----Sorted array-----");
    show_arr(str, 5);
    system("pause");
    return 0;
}

void sort_arr(char * str[], int n)
{
    char * t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[i],str[j]) > 0)
            {
                t = * (str + i);
                * (str + i) = * (str + j);
                * (str + j) = t;
            }
        }
    }
}

void show_arr(char * str[], int n)
{
    for (int i = 0; i < n; i++)
        puts(str[i]);
}