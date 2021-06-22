#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
// 删除节点
struct Student {
    int num;
    float score;
    struct Student * next;
};
int len = 0;

struct Student * create();
bool delete_node(struct Student * pHead, int num);  // num为学号
void show_list(struct Student * pHead);

int main()
{
    int num;
    struct Student * pHead = create();
    show_list(pHead);
    do
    {
        printf("请输入要删除节点的学号：（输入-1停止删除）");
        scanf("%d", &num);
        delete_node(pHead, num);
        show_list(pHead);
    } while (num != -1);
    system("pause");
    return 0;
}
struct Student * create()
{
    struct Student * pHead = (struct Student*)malloc(sizeof(struct Student));
    struct Student * pTail = pHead;
    pTail->next = NULL;
    printf("input a set of num and score(input 0 to exit):\n");
    struct Student * pNew = (struct Student*)malloc(sizeof(struct Student));
    scanf("%d %f", &pNew->num, &pNew->score);
    while (pNew->num != 0)
    {
        len++;
        pTail->next = pNew;
        pNew->next = NULL;
        pTail = pNew;
        pNew = (struct Student*)malloc(sizeof(struct Student));
        scanf("%d %f", &pNew->num, &pNew->score);
    }
    return pHead;
}
void show_list(struct Student * pHead)
{
    struct Student * p = pHead->next;
    printf("this %d students' data:\n", len);
    while (p != NULL)
    {
        printf("%5d %.2f\n", p->num, p->score);
        p = p->next; 
    }
}
bool delete_node(struct Student * pHead, int num)
{
    struct Student * p = pHead;
    // 让p指向目标节点的前一个节点
    while (p->next != NULL && p->next->num != num)
    {
        p = p->next;
    }
    // 此判断方式排除的空链表和找不到的异常
    if (p->next == NULL)
        return false;
    // 释放删除节点的内存
    struct Student * q = p->next;
    p->next = p->next->next;
    free(q);
    len--;
    return true;
}