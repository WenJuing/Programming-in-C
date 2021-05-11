#include <stdio.h>
#include <windows.h>
// 链表
int main()
{
    struct Student {
        int num;
        float score;
        struct Student * next;
    };
    struct Student a, b, c, * pHead, * p;
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 90.0;
    c.num = 10107;
    c.score = 85.0;
    pHead = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = pHead;
    while (p != NULL)
    {
        printf("%7d %.2f\n", p->num, p->score);
        p = p->next;
    }
    system("pause");
    return 0;
}