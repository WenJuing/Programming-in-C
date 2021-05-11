#include <stdio.h>
#include <windows.h>
#include <string.h>
// 结构体指针
int main()
{
    struct Student {
        long num;
        char name[30];
        char sex;
        float score;
    };
    struct Student stu_1;
    struct Student * p;
    p = &stu_1;
    stu_1.num = 10101;
    strcpy(stu_1.name, "Li Lin");
    stu_1.sex = 'M';
    stu_1.score = 89.5;
    printf("NO.%d\nname=%s\nsex=%c\nscore=%.2f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
    printf("NO.%d\nname=%s\nsex=%c\nscore=%.2f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
    system("pause");
    return 0;
}