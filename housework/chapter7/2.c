#include <stdio.h>
#include <windows.h>
#include <math.h> // 使用sqrt()函数
// 求ax^2 + bx + c = 0的根
void same_x(int a, int b);
void differ_x(double a, double b, double t);
void complex_x(double a, double b, double t);
void print_res(double a, double b, double t);

int main()
{
    double a, b, c;
    printf("求解二次一元次方程，请输入a、b、c：");
    scanf("%lf %lf %lf", &a, &b, &c);
    print_res(a, b, c);
    system("pause");
    return 0;
}

void print_res(double a, double b, double c)
{
    double t = b * b - 4 * a * c;
    if (t > 0)
        differ_x(a, b, t);
    else if (t == 0)
        same_x(a, b);
    else
        complex_x(a, b, t);
}

void same_x(int a, int b)
{
    double x1, x2;
    x1 = x2 = -b / (2 * a);
    printf("同根x1=x2=%f\n", x1);
}

void differ_x(double a, double b, double t)
{
    double x1, x2;
    x1 = -b - sqrt(t) / (2 * a);
    x1 = -b + sqrt(t) / (2 * a);
    printf("异根x1=%8f，x2=%8f\n", x1, x2);
}

void complex_x(double a, double b, double t)
{
    // 共轭根：A ± Bi
    double A, B;
    A = -b / (2 * a);
    B = sqrt(-t) / (2 * a);
    printf("共轭x1=%8f+%8fi,x2=%8f-%8fi\n", A, B);
}