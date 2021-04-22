#include <stdio.h>
#include <windows.h>
#include <string.h>     // 使用strcpy()函数
#define N 10
// 输入20个职工的姓名和职工号
// 1、按职工号由小到大排序，姓名也随之排序
// 2、输入一个职工号，用折半查找法找到改职工的姓名
void input(int id[], char name[][20]);
void sort(int id[], char name[][20]);
void find_name(int n, int id[], char name[][20]);
void show_list(int id[], char name[][20]);

int main()
{
    int id[N];          // 存储职工号
    char name[N][20];   // 存储姓名
    int n, flag = 1;
    char c;
    input(id, name);
    sort(id, name);
    show_list(id, name);
    while (flag)
    {
        printf("\ninput a id to search for it's name:");
        scanf("%d", &n);
        if (n < 1 || n > id[N-1])
        {
            printf("Error, this id has been out of the range!\n");
            continue;
        }
        find_name(n, id, name);
        printf("Could you want to search again?(Y/N)");
        getchar();
        c = getchar();
        if (c == 'N' || c == 'n')
            break;
    }
    system("pause");
    return 0;
}

void input(int id[], char name[][20])
{
    for (int i = 0; i < N; i++)
    {
        printf("input NO.%d's id:", i + 1);
        scanf("%d", &id[i]);
        printf("input NO.%id's name:", i + 1);
        getchar();
        gets(name[i]);
    }
}

void show_list(int id[], char name[][20])
{
    printf("\nsorted list:\n\n");
    for (int i = 0; i < N; i++)
        printf("%5d %10s\n", id[i], name[i]);
}

void sort(int id[], char name[][20])
{
    int t;
    char str_t[20];
    // 冒泡法
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (id[i] > id[j])
            {
                // 交换职工号
                t = id[i];
                id[i] = id[j];
                id[j] = t;
                // 也交换姓名
                strcpy(str_t, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], str_t);
            }
        }
    }
}
void find_name(int n, int id[], char name[][20])
{
    int left = 0, right = N-1, mid, loca = -1, flag = 1;
    while (left <= right && flag)
    {
        mid = (left + right) / 2;

        if (n == id[mid])   // 正好是中间的数
        {
            loca = mid;
            flag = 0;
        }
        else if (n < id[mid])   // 要查找的数在左半边
            right = mid - 1;
        else    // 要查找的数在右半边
            left = mid + 1;
    }
    if (loca != -1)
        printf("The correspond name is:%s\n", name[loca]);
    else
        printf("No such id in the list!\n");
}