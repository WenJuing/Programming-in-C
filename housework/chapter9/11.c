#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// a,b两个链表，有学号、成绩，从a链表中删除b链表中有相同学号的节点
typedef struct Student {
    int num;
    float score;
    struct Student * next;
} Student;

Student * create_list_a();
Student * create_list_b();
void delete_same_num(Student * pAHead, Student * pBHead);
void show_list(Student * pHead);

int main()
{
    Student * a = create_list_a();
    show_list(a);
    Student * b = create_list_b();
    show_list(b);
    delete_same_num(a, b);
    show_list(a);
    system("pause");
    return 0;
}

void delete_same_num(Student * pAHead, Student * pBHead)
{
    Student * pA;
    Student * pB;
    Student * p, * pt;
    for (pA = pAHead; pA != NULL; pA = pA->next)
    {
        for (pB = pBHead; pB != NULL; pB = pB->next)
        {
            // 定位到相同节点的上一个节点（方便删除）
            if (pA->next->num == pB->num)
            {
                // p = pA->next;
                pA->next = pA->next->next;
                // free(p);
            }
        }
    }
}

void show_list(Student * pHead)
{
    Student * p = pHead;
    printf("展示链表：\n");
    while (p != NULL)
    {
        printf("(%d|%.2f)->", p->num, p->score);
        p = p->next;
    }
    printf("NULL\n");
}

Student * create_list_a()
{
    Student * pHead, * pTail;
    // 给链表a生成3个节点
    Student * a1 = (Student*)malloc(sizeof(Student));
    Student * a2 = (Student*)malloc(sizeof(Student));
    Student * a3 = (Student*)malloc(sizeof(Student));

    a1->num = 1;
    a1->score = 98;
    a1->next = a2;

    a2->num = 3;
    a2->score = 67.9;
    a2->next = a3;

    a3->num = 5;
    a3->score = 78;
    a3->next = NULL;
    
    pHead = a1;

    return pHead;
}

Student * create_list_b()
{
    Student * pHead, * pTail;
    // 给链表b生成2个节点
    Student * b1 = (Student*)malloc(sizeof(Student));
    Student * b2 = (Student*)malloc(sizeof(Student));

    b1->num = 1;
    b1->score = 98;
    b1->next = b2;

    b2->num = 4;
    b2->score = 67.9;
    b2->next = NULL;
    
    pHead = b1;

    return pHead;
}