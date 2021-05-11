#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
// 链表
struct Student {
    int num;
    float score;
    struct Student * next;
};
struct Student * create();
int main()
{
    struct Student * pHead = create();
    // 返回的是第一个节点的地址
    printf("\nnum:%d\nscore:%.2f\n", pHead->num, pHead->score);
    system("pause");
    return 0;
}

struct Student * create()
{
    struct Student * pHead, * pTail;
    pHead = pTail = NULL;
    printf("输入3个学生的学号和分数：\n");
    for (int i = 0; i < 3; i++)
    {
        struct Student * pNew = (struct Student*)malloc(sizeof(struct Student));
        if (pHead == NULL)  // 若链表为空，则先给头节点和尾节点赋值
            pHead = pTail = pNew;
        scanf("%d %f", &pNew->num, &pNew->score);
        pNew->next = NULL;
        pTail->next = pNew;
        pTail = pNew;
    }
    return pHead;
}