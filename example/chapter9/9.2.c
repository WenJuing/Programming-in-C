#include <stdio.h>
#include <windows.h>
// 存入2个学生的信息（学号、姓名和成绩）到结构体，并输出成绩较高的学生的信息
int main()
{
    struct Student {
        int id;
        char name[30];
        float score;
    } student_1, student_2;

    scanf("%d %s %f", &student_1.id, student_1.name, &student_1.score);
    scanf("%d %s %f", &student_2.id, student_2.name, &student_2.score);
    if (student_1.score > student_2.score)
        printf("id=%d\nname=%s\nscore=%.2f\n", student_1.id, student_1.name, student_1.score);
    else
        printf("id=%d\nname=%s\nscore=%.2f\n", student_2.id, student_2.name, student_2.score);
    system("pause");
    return 0;
}