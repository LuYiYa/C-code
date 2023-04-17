#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 30
#define  TRUE   1
#define  FALSE  0
#define  OK     1
#define  ERROR 0
#define  OVERFLOW  -1
typedef int Status;
typedef   int ElemType;
typedef struct LNode  /* ������ʽ�洢�ṹ */
{
    ElemType data;
    struct LNode* next;
}LNode, * LinkList;
int  Get_LinkList(LinkList H, ElemType key);//��ֵ��ѯ���ҵ��򷵻���λ�ã�δ�ҵ��򷵻�0
Status ListInsert(LinkList& H, int i, ElemType e);
Status ListDelete(LinkList& H, int i);
Status Creat_LinkList(LinkList& L)               /* ������ʽ�� */
{
    LinkList head, r, s;
    int k;
    head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL;
    r = head;
    scanf("%d", &k);
    while (k > 0)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = k;
        s->next = NULL;
        r->next = s;
        r = s;
        scanf("%d", &k);
    }
    L = head;
    return OK;
}/* Creat_LinkList */
void Print_LinkList(LinkList H)     /* �����ʽ�� */
{
    LNode* p;
    p = H->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}/* Print_LinkList */


int  main()
{
    ElemType key;
    LinkList L;
    int p, loc;
    Creat_LinkList(L);  //����������
    Print_LinkList(L);   //���������
    scanf("%d", &key);  //��������ҵ�ֵ
    p = Get_LinkList(L, key);  //
    printf("key�ڵ�%dλ\n", p);
    scanf("%d%d", &key, &loc);  //����Ҫ�����ֵkey�Լ�λ��loc
    ListInsert(L, loc, key);
    Print_LinkList(L);
    scanf("%d", &loc);//����Ҫɾ��Ԫ�ص�λ��
    ListDelete(L, loc);
    Print_LinkList(L);
    return 0;
}

/* ����������д�� */
int  Get_LinkList(LinkList H, ElemType key)
{
    int loc = 0;
    LinkList Ph = H;

    while (Ph->data != key && Ph != NULL)
    {
        loc++;
        Ph = Ph->next;
    }

    if (Ph == NULL)
    {
        return ERROR;
    }

    return loc;
}

Status ListInsert(LinkList& H, int i, ElemType e)
{
    int j = 0;
    LinkList pH=H;

    while (pH != NULL && j != i - 1)
    {
        pH = pH->next;
        j++;
    }

    if (i <= 0 || pH == NULL)
    {
        return ERROR;
    }
    
    LinkList pNew = (LinkList)malloc(sizeof(LNode));
    pNew->data = e;

    pNew->next = pH->next;
    pH->next = pNew;

    return OK;
}

Status ListDelete(LinkList& H, int i)
{
    int j = 0;
    LinkList pH = H;

    while (pH->next != NULL && j != i - 1)
    {
        pH = pH->next;
        j++;
    }

    if (i <= 0 || pH->next == NULL)
    {
        return ERROR;
    }

    LinkList q = pH->next;
    pH->next = q->next;
    free(q);
    q->data = NULL;

    return OK;
}