#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>     // 使用exit()函数
#define N 5
// 输入5个学生的信息（姓名、学号、年龄、地址），以二进制方式存到磁盘中，再从磁盘读出
typedef struct Student {
    char name[10];
    int num;
    int age;
    char addr[15];
} Student;

void get_stu_info(Student stu[]);           // 从终端获取学生信息
void save_to_file(Student stu[]);           // 保存数据集到磁盘文件
void read_from_file(char filename[]);       // 从磁盘文件读取数据集
int main()
{
    Student stu[N];
    char filename[] = "student_dataset.dat";
    get_stu_info(stu);
    save_to_file(stu);
    read_from_file(filename);
    system("pause");
    return 0;
}

void get_stu_info(Student stu[])
{
    printf("please enter data of 5 students:\n");
    for (int i = 0; i < N; i++)
        scanf("%s %d %d %s", stu[i].name, &stu[i].num, &stu[i].age, stu[i].addr);
}

void save_to_file(Student stu[])
{
    FILE * fp;
    // 以只写方式打开一个二进制文件，没有则新建
    if ((fp = fopen("student_dataset.dat", "wb")) == NULL)
    {
        printf("cannot open file!\n");
        exit(0);
    }
    // 向磁盘文件写入数据集
    for (int i = 0; i < N; i++)
        if((fwrite(&stu[i], sizeof(Student), 1, fp)) != 1)  // 写入数据并判断是否成功写入
            printf("file write error!\n");
    fclose(fp);
}

void read_from_file(char filename[])
{
    FILE * fp;
    Student stu;
    // 以只读方式打开一个二进制文件
    if ((fp = fopen(filename, "rb")) == NULL)
    {
        printf("cannot open file!\n");
        exit(0);
    }
    // 向磁盘文件读出数据集
    printf("the datas from \"student_dataset.dat\"\n");
    for (int i = 0; i < N; i++)
    {
        fread(&stu, sizeof(Student), 1, fp);    // 读取成功后转到下一区块继续读取
        printf("%-10s %4d %4d %-15s\n", stu.name, stu.num, stu.age, stu.addr);
    }

    fclose(fp);
}