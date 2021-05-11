#include <stdio.h>
#include <windows.h>
#include <string.h>
// 3个候选人，按名字10投票，输出候选人姓名和总票数
int main()
{
    struct Person {
        char name[30];
        int count;
    } leader[3]={"Wang", 0, "Lin", 0, "Zhang", 0};
    char t[30];
    for (int i = 0; i < 10; i++)
    {
        printf("第%d人开始投票：", i + 1);
        gets(t);
        for (int j = 0; j < 3; j++)
            if (strcmp(t, leader[j].name) == 0) leader[j].count++;
    }
    printf("Result:\n");
    for (int i = 0; i < 3; i++)
        printf("%s:%d\n", leader[i].name, leader[i].count);
    system("pause");
    return 0;
}