#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define N 2
// 输入一组职工数据，存放到employee.dat中，再从该文件中提取职工名、工资存到另一个文件中
struct People {
    char name[10];  // 名字
    int num;        // 职工号
    char gender;    // 性别：M为男，F为女
    int age;        // 年龄
    char addr[20];  // 住址
    float wage;     // 工资
    char health[10];     // 健康状况：pool->good
    char education[10];  // 文化程度：low->high
} people[N];
struct peo {
    char name[10];  // 名字
    float wage;     // 工资
} peo[N];

void input();
void save_all();
void save_name_and_wage();
void show_name_and_wage();
int main()
{
    input();
    save_all();
    save_name_and_wage();
    show_name_and_wage();
    system("pause");
    return 0;
}
void input()
{
    printf("input %d people's name, num, gender(M or F), age, addr, ", N);
    printf("wage, health(pool or good), education(low or high):\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %c %d %s %f %s %s", people[i].name, &people[i].num, &people[i].gender,
        &people[i].age, people[i].addr, &people[i].wage, people[i].health, people[i].education);
        // 把姓名和工资存到另一个结果体中
        strcpy(peo[i].name, people[i].name);
        peo[i].wage = people[i].wage;
    }

}
void save_all()
{
    FILE * fp = fopen("employee.dat", "wb+");
    for (int i = 0; i < N; i++)
        fwrite(&people[i], sizeof(struct People), 1, fp);
    fclose(fp);
}
void save_name_and_wage()
{
    FILE * fp = fopen("name_wage.dat", "wb+");
    for (int i = 0; i < N; i++)
    {
        fwrite(&peo[i], sizeof(struct peo), 1, fp);
    }
    fclose(fp);
}
void show_name_and_wage()
{
    FILE * fp;
    if ((fp = fopen("name_wage.dat", "rb")) == NULL)
    {
        printf("no such file!!\n");
        exit(0);
    }
    printf("name    wage\n");
    for (int i = 0; fread(&peo[i], sizeof(struct peo), 1, fp); i++)
    {
        printf("%-6s %6.2f\n", peo[i].name, peo[i].wage);
    }
    fclose(fp);
}