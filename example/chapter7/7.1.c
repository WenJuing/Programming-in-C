#include <stdio.h>
#include <windows.h>

void print_star_line();
void print_sentense();

int main()
{
    print_star_line();
    print_sentense();
    print_star_line();
    system("pause");
    return 0;
}

void print_star_line()
{
    printf("********************\n");
}

void print_sentense()
{
    printf("How do you do!\n");
}