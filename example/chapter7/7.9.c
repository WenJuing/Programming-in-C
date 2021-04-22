#include <stdio.h>
#include <Windows.h>
// 输入10个数，输出最大的元素和位号
int get_max_key(int * a);
int main()
{
    int key, a[10];
    printf("输入10个数\n");
    for (int i = 0; i < 10; i++)
    {
        printf("第%d个数：", i+1);
        scanf("%d", &a[i]);
    }
    key = get_max_key(a) ;
    printf("最大的数是%d，是第%d个数\n", a[key], key+1);
    system("pause");
    return 0;
}

int get_max_key(int * a)
{
    int max = a[0], key;
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            key = i;
        }
    }
    return key;
}