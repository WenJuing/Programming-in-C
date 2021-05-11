#include <stdio.h>
#include <windows.h>
// 存入学生信息（学号、姓名、性别、住址）到结构体，并输出
int main()
{
    struct Student {
        int id;
        char name[30];
        char gender;
        char addr[100];
    } a = {10001, "Li Lei", 'M', "123 Beiging Road"};
    // 允许对某一成员初始化
    struct Student b = {.name="Zhang"};
    printf("NO.%d\nname=%s\ngenger=%c\naddress=%s\n\n", a.id, a.name, a.gender, a.addr);
    printf("NO.%d\nname=%s\ngenger=%c\naddress=%s\n\n", b.id, b.name, b.gender, b.addr);
    system("pause");
    return 0;
}