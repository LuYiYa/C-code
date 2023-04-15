#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct Node {
    ElemType data;
    struct Node* next;
}LNode, * LinkList;

LinkList Read();
LinkList Merge(LinkList L1, LinkList L2);

int main()
{
    LinkList L1, L2, L, p;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    if (!L)
    {
        printf("empty");
        return 0;
    }

    p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}


/* 请在这里填写答案 */
LinkList Read()
{
    LinkList pHead;
    LinkList pTail;
    pHead = (LinkList)malloc(sizeof(LNode));
    pTail = pHead;
    pTail->next = NULL;

    int val;
    scanf("%d", &val);
    while (val != -1)
    {
        LinkList pNew = (LinkList)malloc(sizeof(LNode));

        pNew->data = val;
        pTail->next = pNew;
        pNew->next = NULL;
        pTail = pNew;

        scanf("%d", &val);

    }

    return pHead;
}
LinkList Merge(LinkList L1, LinkList L2)
{
    LinkList L ,p;
    L = L1;
    p = L;

    if (L1->next == NULL && L2->next == NULL)
    {
        return 0;
    }
    
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = L2->next;

    p = L->next;
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }

    LinkList q;
    int i, j, t;
    for (i = 1, p = L->next; i < len - 1; i++,p=p->next)
    {
        for (j = i + 1, q = p->next; j < len; j++, q = q->next)
        {
            if (p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }

    return L;
}

 