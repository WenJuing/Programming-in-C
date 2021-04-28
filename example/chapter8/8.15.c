#include <stdio.h>
#include <windows.h>
// 查找有一门以上课程不及格的学生，输出他们的全部课程成绩
void search(float ( * p)[4], int n);
int main()
{
    float score[3][4] = {{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    search(score, 3);
    system("pause");
    return 0;
}

void search(float ( * p)[4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ( * ( * (p + i) + j) < 60)
            {
                printf("第%d位学生有不及格成绩：", i + 1);
                for (int k = 0; k < 4; k++)
                    printf("%8.2f", * ( * (p + i) + k));
                printf("\n");
                break;
            }
        }
    }
    printf("\n");
}