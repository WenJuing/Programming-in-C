#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#define N 10
// 从第9题的name_wage.dat文件中删去一个职工的数据，再存回原文件
struct peo {
    char name[10];  // 名字
    float wage;     // 工资
} peo[N];

int n = 0;  // 数据个数

void delete_data(char name[]);
void save_name_and_wage();
void show_name_and_wage();
int main()
{
    char name[10];
    show_name_and_wage();
    puts("input a name to delete:");
    gets(name);
    delete_data(name);
    save_name_and_wage();
    show_name_and_wage();
    system("pause");
    return 0;
}
void delete_data(char name[])
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(peo[i].name, name) == 0)
        {
            flag = 1;
            n--;
            for (int j = i; j < n - 1; j++)
            {
                peo[j].wage = peo[j+1].wage;
                strcpy(peo[j].name, peo[j+1].name);
            }
        }
    }
    if (flag == 0) printf("no such name!!\n");
}
void save_name_and_wage()
{
    FILE * fp = fopen("name_wage.dat", "wb+");
    for (int i = 0; i < n; i++)
    {
        fwrite(&peo[i], sizeof(struct peo), 1, fp);
    }
    if (n == 0) fputc('\0', fp);
    fclose(fp);
}
void show_name_and_wage()
{
    FILE * fp;
    n = 0;
    if ((fp = fopen("name_wage.dat", "rb")) == NULL)
    {
        printf("no such file!!\n");
        exit(0);
    }
    printf("name    wage\n");
    for (int i = 0; fread(&peo[i], sizeof(struct peo), 1, fp); i++)
    {
        printf("%-6s %6.2f\n", peo[i].name, peo[i].wage);
        n++;
    }
    fclose(fp);
}