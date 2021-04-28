#include <stdio.h>
#include <windows.h>
// 输出有不及格学生4门课的成绩
float * search(float ( * p)[4]);
int main()
{ 
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float * p;
    for (int i = 0; i < 3; i++)
    {
        p = search(score + i);  // score + i是第i行首地址
        if (p)
        {
            printf("第%d个学生有不及格成绩：", i + 1);
            for (int j = 0; j < 4; j++)
                printf("%8.2f", * p++);
            printf("\n");
        }
    }
    system("pause");
    return 0;
}

float * search(float ( * p)[4]) // p指向有4个浮点型元素的数组的地址
{
    float * pt = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (* ( * p + i) < 60)
        {
            pt = * p;   //  星*把指向行的转换成指向该行第一个
        }
    }
    return pt;
}