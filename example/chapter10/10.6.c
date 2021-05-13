#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
// 有一个存有5条学生数据的文件，读取并将第1，3，5个学生的数据输出到终端
typedef struct Student {
    char name[10];
    int num;
    int age;
    char addr[15];
} Student;

int main()
{
    FILE * fp = fopen("student_dataset.dat", "rb");
    Student stu;
    for (int i = 0; i < 5; i += 2)
    {
        fseek(fp, i * sizeof(Student), 0);
        fread(&stu, sizeof(Student), 1, fp);
        printf("%-15s %-4d %-4d %-15s\n", stu.name, stu.num, stu.age, stu.addr);
    }
    fclose(fp);
    system("pause");
    return 0;
}