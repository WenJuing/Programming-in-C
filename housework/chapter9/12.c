#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// 建立一个链表，每个节点包含姓名。输入一个姓名，将该节点删除
typedef struct Student {
    char name[10];
    struct Student * next;
} Student;

Student * create_list();
bool delete_node(Student * pHead, char * name);
void traverse_list(Student * pHead);

int main()
{
    char name[10];
    Student * pHead = create_list();
    traverse_list(pHead);

    do {
    printf("输入要删除节点的姓名（exit退出）：");
    getchar();
    gets(name);
    if (strcmp(name, "exit") == 0) break;
    if (delete_node(pHead, name))
    {
        printf("删除成功！");
        traverse_list(pHead);
    }
    else
        printf("删除失败！\n");
    } while (strcmp(name, "exit") != 0);

    system("pause");
    return 0;
}

Student * create_list()
{
    Student * pHead = (Student *)malloc(sizeof(Student));
    Student * pTail = pHead;
    pTail->next = NULL;

    Student * pNew = (Student *)malloc(sizeof(Student));
    printf("输入姓名（exit退出）：\n");
    scanf("%s", pNew->name);
    while (strcmp(pNew->name, "exit"))
    {
        pTail->next = pNew;
        pNew->next = NULL;
        pTail = pNew;
        pNew = (Student *)malloc(sizeof(Student));
        scanf("%s", &pNew->name);
    }
    return pHead;
}
bool delete_node(Student * pHead, char * name)
{
    Student * p = pHead;
    // 让p指向目标节点的前一个节点
    while (p->next != NULL && strcmp(p->next->name, name) != 0)
        p = p->next;
    // 排除空链表和找不到的异常
    if (p->next == NULL)
        return false;
    Student * q = p->next;  // q为要删除的节点
    p->next = p->next->next;
    free(q);
    return true;
}
void traverse_list(Student * pHead)
{
    Student * p = pHead->next;
    printf("链表遍历结果：\n");
    while (p != NULL)
    {
        puts(p->name);
        p = p->next;
    }
}