#include <stdio.h>
#include <Windows.h>
// 汉诺塔问题
void hanoi(int n, char A, char B, char C);
void move(char x, char y);
int main()
{
    int n;
    printf("输入汉诺塔盘中层数：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    system("pause");
    return 0;
}

void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
        move(A, C);
    else
    {
        hanoi(n-1, A, C, B);
        move(A, C);
        hanoi(n-1, B, A, C);
    }
}

void move(char x, char y)
{
    printf("%c-->%c\n", x, y);
}
