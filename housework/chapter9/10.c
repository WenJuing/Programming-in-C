#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// a,b两个链表，有学号、成绩，合并后按学号升序排列
typedef struct Student {
    int num;
    float score;
    struct Student * next;
} Student;

Student * create_list_a();
Student * create_list_b();
Student * connect_a_and_b(Student * pAHead, Student * pBHead);
void show_list(Student * pHead);

int main()
{
    Student * a = create_list_a();
    show_list(a);
    Student * b = create_list_b();
    show_list(b);
    Student * c = connect_a_and_b(a, b);
    show_list(c);
    system("pause");
    return 0;
}
Student * connect_a_and_b(Student * pAHead, Student * pBHead)
{
    Student * pA = pAHead;
    Student * pB = pBHead;
    int i, j, t_num, t_score;
    Student * pi, * pj, * pk;
    // 找到链表a的结尾
    while (pA->next != NULL)
        pA = pA->next;
    // 在链表a的结尾接上链表b（此时pA->next == NULL）
    while (pB != NULL)
    {
        pA->next = pB;
        pA = pA->next;
        pB = pB->next;
    }
    // 链接好了，然后用选择法按学号升序排列
    for (i = 0, pi = pAHead; i < 4; i++, pi = pi->next)
    {
        pk = pi;
        for (j = i + 1, pj = pi->next; j < 5; j++, pj = pj->next)
        {
            if (pj->num < pk->num)
                pk = pj;
        }
        if (pk != pi)
        {
            t_num = pk->num;
            pk->num = pi->num;
            pi->num = t_num;

            t_score = pk->score;
            pk->score = pi->score;
            pi->score = t_score;
        }
    }
    return pAHead;
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

    b1->num = 2;
    b1->score = 98;
    b1->next = b2;

    b2->num = 4;
    b2->score = 67.9;
    b2->next = NULL;
    
    pHead = b1;

    return pHead;
}