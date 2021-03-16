#include <stdio.h>
#include <windows.h>

int main()
{
    float c, f;
    printf("请输入华氏度（单位℉）：");
    scanf("%f", &f);
    c = 5.0 / 9 * (f-32);
    printf("对应的摄氏度为：%.2f℃\n", c);
    system("pause");
    return 0;
}