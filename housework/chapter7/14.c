#include <stdio.h>
#include <windows.h>
#define N 10
#define M 5
// 输入10学生5门课的成绩
// 1、计算每个学生的平均分
// 2、计算每门课的平均分
// 3、找出50个分数中最高分数的学生和课程
// 4、计算平均分方差

/** 全局变量 **/
float grade[N][M];
float stu[N], course[M];         // 存储学生平均成绩和课程平均成绩
int stu_h, couse_h;              // 最高分数对应的学生和课程

/** 函数声明 **/
void stu_aveg();                 // 计算学生平均分
void course_aveg();              // 计算课程平均分
float variance();                // 求方差
void input_stu();                // 输入学生成绩
float get_highest_score();       // 求最高分

int main()
{
    float high_score;

    input_stu();
    stu_aveg();
    course_aveg();
    variance();
    
    // 输出数据
    printf("\n    NO.    cour1   cour2   cour3   cour4   cour5    aver\n");
    // 输出每个学生的各科成绩和平均成绩
    for (int i = 0; i < N; i++)
    {
        printf("\n NO  %2d ", i + 1);
        for (int j = 0; j < M; j++)
        {
            printf("%8.2f", grade[i][j]);
        }
        printf("%8.2f\n", stu[i]);
    }
    // 输出每科的平均成绩
    printf("\naverage:");
    for (int j = 0; j < M; j++)
        printf("%8.2f", course[j]);
    printf("\n");
    // 输出最高分对应的学生和课程
    high_score = get_highest_score();
    printf("\nhighest:%8.2f   NO.%2d   course %2d\n", high_score, stu_h, couse_h);
    // 输出平均分方差
    printf("\nvariance:%7.2f\n", variance());

    system("pause");
    return 0;
}

void input_stu()
{
    for (int i = 0; i < N; i++)
    {
        printf("\ninput score of studeng%2d:\n", i + 1);
        for (int j = 0; j < M; j++)
        {
            scanf("%f", &grade[i][j]);
        }
    }
}

void stu_aveg()
{
    double sum;

    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum += grade[i][j];
        }
        stu[i] = sum / 5.0;
    }
}

void course_aveg()
{
    double sum;

    for (int j = 0; j < M; j++)
    {
        sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += grade[i][j];
        }
        course[j] = sum / (float)N;
    }
}

float get_highest_score()
{
    float max;
    max = grade[0][0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (grade[i][j] > max)
            {
                max = grade[i][j];
                stu_h = i + 1;      // 从第1个开始记
                couse_h = j + 1;
            }
        }
    }
    return max;
}

float variance()
{
    double sum_x = 0.0, sum_xn = 0.0;
    for (int i = 0; i < N; i++)
    {
        sum_x += stu[i] * stu[i];
        sum_xn += stu[i];
    }
    return sum_x / N - (sum_xn / N) * (sum_xn / N);
}