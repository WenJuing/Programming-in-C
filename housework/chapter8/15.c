#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define stu_sum 4       // 学生数量
#define course_sum 5    // 科目数量
// 有4学生5门课，要求
// 1）求第1门课平均分
// 2）找到2门以上（包括2门）不及格的学生，输出学号、全部成绩、平均成绩
// 3）找到平均成绩＞90 或 全部成绩＞85的学生

// 科目名称初始化（参数：科目数组）
void init_course_name(char (*p)[10]);
// 学号、分数和平均分初始化（参数：学号数组 分数数组）
void init_num_score_aver(int num[], float (*p)[course_sum], float * pAver);   
// 第1题的函数（参数：科目数组 分数数组）
void show_first_course_aver(char course[][10], float score[][course_sum]);
// 第2题的函数（参数：科目数组 学号数组 分数数组 平均分数组）
void show_info_fail_2(char course[5][10], int num[stu_sum], float score[][course_sum], float aver[stu_sum]);
// 第3题的函数（参数：学号指针 分数指针 平均分指针）
void show_great_stu(char course[5][10], int * pNum, float * pScore, float * pAver);
int main()
{
    int i, j, num[stu_sum], * pNum; // 存储学号
    // 存储全部分数和平均分
    float score[stu_sum][course_sum], aver[stu_sum], * pScore, * pAver;
    char course[course_sum][10], ( * pCourse)[10];  // 存储科目名称

    // 给指针赋初值
    pNum = num;
    pScore = &score[0][0];
    pAver = aver;
    pCourse = course;

    // 输入科目名称
    init_course_name(course);
    // 输入学生号和分数
    init_num_score_aver(num, score, pAver);

    show_first_course_aver(course, score);
    show_info_fail_2(pCourse, num, score, aver);
    show_great_stu(pCourse, pNum, pScore, pAver);

    system("pause");
    return 0;
}

void init_course_name(char (*p)[10])
{
    printf("input %d course's name:\n", course_sum);
    for (int i = 0; i < course_sum; i++)
        gets(p[i]);
}

void init_num_score_aver(int num[], float (*p)[course_sum], float * pAver)
{
    printf("input %d student's NO. and %d scores:\n", stu_sum, course_sum);
    for (int i = 0; i < stu_sum; i++, p++)
    {
        scanf("%d %f %f %f %f %f", &num[i], * p, * p + 1, * p + 2, * p + 3, * p + 4);
        * (pAver + i) = (** p + * (*p + 1) + * (*p + 2) + * (*p + 3) + * (*p + 4)) / 5;
    }
}

void show_first_course_aver(char course[][10], float score[][course_sum])
{
    float aver = 0;
    for (int i = 0; i < stu_sum; i++)
        aver += score[i][0] / 4;
    printf("\ncourse 1:%s average score:%6.2f\n", course[0], aver);
}

void show_info_fail_2(char course[5][10], int num[stu_sum], float score[][course_sum], float aver[stu_sum])
{
    // 统计不及格科目数量
    int fail, row;
    int * pNum = num;
    float * pScore = &score[0][0], * pAver = aver;
    printf("     ==========Student who is fail in two courses==========     \n");
    for (int i = 0; i < stu_sum; i++, pNum++, pAver++)
    {
        // 遍历每个学生的5门课的成绩
        fail = 0;
        for (int j = 0; j < course_sum; j++)
        {
            if (* (pScore + i * course_sum + j) < 60.0) ++fail;
        }
        if (fail >= 2)
        {
            printf("NO.       ");
            for (int i = 0; i < course_sum; i++)
                printf("%12s", course[i]);
            printf("average\n");
            row = i * course_sum;
            printf("%12d%12.2f%12.2f%12.2f%12.2f%12.2f %12.2f\n", * pNum, 
            * (pScore + row), * (pScore + row + 1), * (pScore + row + 2),
            * (pScore + row + 3), * (pScore + row + 4), * pAver);
        }
    }
}

void show_great_stu(char course[5][10], int * pNum, float * pScore, float * pAver)
{
    int flag = 0;
    int row;
    printf("     ==========Student whose score is great==========     \n");
    // 遍历每个学生
    for (int i = 0; i < stu_sum; i++)
    {
        // 找到平均成绩大于90的学生
        if (* (pAver + i) >= 90)    flag = 1;
        // 找到全部成绩大于85的学生
        row = i * course_sum;
        for (int j = 0; j < course_sum; j++)
        {
            if (* (pScore + row  + j) >= 85)
            {
                flag = 1;
            } else 
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("NO.       ");
            for (int i = 0; i < course_sum; i++)
                printf("%12s", course[i]);
            printf("average\n");
            printf("%12d%12.2f%12.2f%12.2f%12.2f%12.2f %12.2f\n", * (pNum + i), 
            * (pScore + row), * (pScore + row + 1), * (pScore + row + 2),
            * (pScore + row + 3), * (pScore + row + 4), * (pAver + i));
        }
    }

}