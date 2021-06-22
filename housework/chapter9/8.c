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
bool insert_node(struct Student * pHead, int pos);  // pos为位置，从1开始
void show_list(struct Student * pHead);

int main()
{
    int pos;
    struct Student * pHead = create();
    show_list(pHead);
    do
    {
        printf("请输入要插入学生的位置：（输入-1停止删除）");
        scanf("%d", &pos);
        insert_node(pHead, pos);
    show_list(pHead);
    } while (pos != -1);
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
bool insert_node(struct Student * pHead, int pos)
{
    int i = 0, num;
    float score;
    struct Student * p = pHead;
    // 让p指向目标节点的前一个节点
    while (p != NULL && i < pos - 1)
    {
        p = p->next;
        i++;
    }
    // 此判断排除了pos位置超出的异常
    if (pos < 1 || p == NULL)
    {
        printf("插入失败！\n");
        return false;
    }
    struct Student * pNew = (struct Student*)malloc(sizeof(struct Student));
    printf("输入新来的学生的学号和成绩：");
    scanf("%d %f", &pNew->num, &pNew->score);
    pNew->next = p->next;
    p->next = pNew;
    len++;
    return true;
}