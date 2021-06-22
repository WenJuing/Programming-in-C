#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} Node, *pNode;

pNode create_list();    // 创建链表
bool insert_node(pNode pHead, int pos);         // 插入节点，pos为插入的位置，从1开始
bool delete_node(pNode pHead, int data, int * val);  // 删除节点，data为要删除节点的数据
void traverse_list(pNode pHead);    // 遍历节点

int main()
{
    int data, pos, val;
    pNode pHead = create_list();
    traverse_list(pHead);

    do {
        printf("输入要删除节点的数据（-1退出）：");
        scanf("%d", &data);
        if (data == -1) break;
        if (delete_node(pHead, data, &val))
        {
            printf("删除成功！删除的是%d\n", val);
            traverse_list(pHead);
        }
        else
            printf("删除失败！\n");
    } while (data != -1);

    do {
        printf("输入要插入节点的位置（-1退出）：");
        scanf("%d", &pos);
        if (pos == -1) break;
        if (insert_node(pHead, pos))
        {
            printf("插入成功！\n");
            traverse_list(pHead);
        }
        else
            printf("插入失败！\n");
    } while (pos != -1);

    system("pause");
    return 0;
}

pNode create_list()
{
    pNode pHead = (pNode)malloc(sizeof(Node));
    pNode pTail = pHead;
    pTail->next = NULL;

    pNode pNew = (pNode)malloc(sizeof(Node));
    printf("输入号码（输入0退出）：\n");
    scanf("%d", &pNew->data);
    while (pNew->data != 0)
    {
        pTail->next = pNew;
        pNew->next = NULL;
        pTail = pNew;
        pNew = (pNode)malloc(sizeof(Node));
        scanf("%d", &pNew->data);
    }
    return pHead;
}
bool insert_node(pNode pHead, int pos)
{
    int i = 0, data;
    pNode p = pHead;
    // 让p指向目标节点的前一个节点
    while (p != NULL && i < pos - 1)
    {
        p = p->next;
        i++;
    }
    // 排除位置超出的异常
    if (p == NULL || pos < 1)
        return false;
    pNode pNew = (pNode)malloc(sizeof(Node));
    printf("输入要插入的数据：");
    scanf("%d", &pNew->data);
    pNew->next = p->next;
    p->next = pNew;
    return true;
}
bool delete_node(pNode pHead, int data, int * val)
{
    pNode p = pHead;
    // 让p指向目标节点的前一个节点
    while (p->next != NULL && p->next->data != data)
    {
        p = p->next;
    }
    // 排除空链表和找不到的异常
    if (p->next == NULL)
        return false;
    pNode q = p->next;  // q为要删除的节点
    *val = q->data;     // 得到删除节点的数据
    p->next = p->next->next;
    free(q);
    return true;
}
void traverse_list(pNode pHead)
{
    pNode p = pHead->next;
    printf("链表遍历结果：\n");
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}