#include <stdio.h>
#include <windows.h>
// 用选择法对成绩排序
int main()
{
    struct Student {
        int id;
        char name[30];
        float score;
    };
    int i, j, k;
    struct Student temp;
    struct Student stu[5] = {
        {10101, "Zhang", 78},
        {10103, "Wang", 98.5},
        {10106, "Li", 86},
        {10108, "Ling", 73.5},
        {10110, "Sun", 100},
    };
    // 选择法排序
    for (i = 0; i < 4; i++)
    {
        k = i;
        for (j = i + 1; j < 5; j++)
        {
            if (stu[j].score > stu[k].score)
                k = j;
        }
        // 结构体变量整体互换
        temp = stu[i];
        stu[i] = stu[k];
        stu[k] = temp;
    }
    // 打印输出
    printf("The order is:\n");
    for (int i = 0; i < 5; i++)
        printf("%8d%8s%8.2f\n", stu[i].id, stu[i].name, stu[i].score);
    system("pause");
    return 0;
}