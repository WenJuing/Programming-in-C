#include <stdio.h>
#include <windows.h>
// 指向结构体数组的指针
int main()
{
    struct Student {
        int num;
        char name[30];
        char sex;
        int age;
    };
    struct Student stu[3] = {
        {10101, "Li Lin", 'M', 18},
        {10102, "Zhang Fang", 'M', 19},
        {10104, "Wang Min", 'F', 20},
    };
    struct Student * p;
    printf(" NO.    Name        sex   age\n");
    for (p = stu; p < stu + 3; p++)
        printf("%5d %-13s %-5c %-3d\n", p->num, p->name, p->sex, p->age);
    system("pause");
    return 0;
}