#include <stdio.h>
#include <stdlib.h>

// 定义链表结点
struct Node {
    int data;
    struct Node *next;
};

// 头插法：新节点插在链表最前面
struct Node* headInsert(struct Node *head, int val)
{
    // 1.开辟新节点内存
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    // 2.新节点指向原来的头结点
    newNode->next = head;
    // 3.头指针更新为新节点
    head = newNode;
    return head;
}

// 遍历打印链表
void printList(struct Node *head)
{
    struct Node *p = head;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    head = headInsert(head,10);
    head = headInsert(head,20);
    head = headInsert(head,30);
    printList(head);
    return 0;
}