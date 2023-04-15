#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 30
#define  TRUE   1
#define  FALSE  0
#define  OK     1
#define  ERROR 0
#define  OVERFLOW  -1
typedef int Status;
typedef  struct {
    char name[20];
    char symptom[20];
}ElemType;
typedef struct LNode  /* ������ʽ�洢�ṹ */
{
    ElemType data;
    struct LNode* next;
}LNode, * LinkList;

Status Creat_LinkList(LinkList& head)               /* ��������Ԥ��4���ܽ�����Ϣ */
{
    LinkList r, s;
    head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL;
    r = head;
    s = (LNode*)malloc(sizeof(LNode));
    strcpy(s->data.name, "�³�");
    strcpy(s->data.symptom, "��֢״");
    r->next = s;
    r = s;
    s = (LNode*)malloc(sizeof(LNode));
    strcpy(s->data.name, "����");
    strcpy(s->data.symptom, "��΢����");
    r->next = s;
    r = s;
    s = (LNode*)malloc(sizeof(LNode));
    strcpy(s->data.name, "����");
    strcpy(s->data.symptom, "��֢״");
    r->next = s;
    r = s;
    s = (LNode*)malloc(sizeof(LNode));
    strcpy(s->data.name, "��ΰ");
    strcpy(s->data.symptom, "����");
    r->next = s;
    r = s;
    r->next = NULL;
    return OK;
}/* Creat_LinkList */
void Print_LinkList(LinkList H)     /* �����ʽ�� */
{
    LinkList p;
    p = H->next;
    while (p != NULL)
    {
        printf("�Ӵ��ߣ�%s,֢״Ϊ��%s\n", p->data.name, p->data.symptom);
        p = p->next;
    }
}/* Print_LinkList */
LinkList  locate_LinkList(LinkList H, char key[])
{
    LinkList loc = H->next;
    while (loc != NULL && strcmp(loc->data.name, key) != 0)
    {
        loc = loc->next;
    }

    return loc;

}/*Get_LinkList*/

Status ListInsert(LinkList& H, int i, ElemType e)
{
    /* ����������д�� */
    LinkList p1 = NULL, p2 = NULL, r = NULL;
    p1 = H;
    p2 = H->next;
    int cnt = 1;
    for (cnt = 1; cnt < i; cnt++)
    {
       
        if (p2 == NULL)
        {
            return ERROR;
        }
        else
        {
            p1 = p1->next;
            p2 = p2->next;
        }

    }

    r = (LinkList)malloc(sizeof(LNode));
    strcpy(r->data.name, e.name);
    strcpy(r->data.symptom, e.symptom);
    p1->next = r;
    r->next = p2;

    return OK;
}

int  main()
{
    char  kname[20];
    ElemType person;
    int location;
    LinkList L, loc;
    Creat_LinkList(L);  //����������
    scanf("%s", person.name); //���������ܽ��ߵ�����
    scanf("%s", person.symptom);//���������ܽ��ߵ�֢״
    scanf("%d", &location);//�������λ��
    ListInsert(L, location, person);//ִ�в���
    Print_LinkList(L);//��ӡ�������ܽ�������
    scanf("%s", kname);//�������ѯ���ܽ��ߵ�����
    loc = locate_LinkList(L, kname);//��������ѯ�ܽ���
    if (loc != NULL)  //���ҳɹ����ӡ���ܽ��ߵ�֢״
        printf("�Ӵ���%s��֢״Ϊ��%s\n", loc->data.name, loc->data.symptom);
    else
        printf("���޴��ˣ�");
    return OK;
}