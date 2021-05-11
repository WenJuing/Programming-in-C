#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// 共用体类型（联合）
struct {                // 声明无名结构体类型
    int num;
    char name[10];
    char sex;
    char job;
    union {             // 声明无名共用体类型
        int clas;
        char position[10];
    } category;
} person[2];
int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("please enter the data of person:\n");
        scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);
        if (person[i].job == 's')   // 若职业为学生，则输入班级号
            scanf("%d", &person[i].category.clas);
        else if (person[i].job == 't')   // 若职业为教师，则输入职务
            scanf("%s", &person[i].category.position);
        else
            printf("Input error!\n");
    }
    printf("\nNo.   name      sex   job   class/position\n");
    for (int i = 0; i < 2; i++)
    {
        if (person[i].job == 's')
            printf("%5d %-10s %-6c %-6c %-5d\n", 
            person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.clas);
        if (person[i].job == 't')
            printf("%5d %-10s %-6c %-6c %-5s\n", 
            person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
    }
    system("pause");
    return 0;
}