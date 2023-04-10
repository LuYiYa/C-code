#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW - 2

typedef int Status;

typedef struct Telephone {
	char name[10];
	char Tel[12];
}ElemType;

typedef struct LNode /*������ʽ�洢�ṹ*/
{
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

Status InitList (LinkList &L) {
	L = (LinkList)malloc(sizeof(LNode));
	L ->next = NULL;
	return OK;
}
void Print_LinkList(LinkList H)/*���������ÿ������Ԫ��ֵ*/
{
	LNode* p;
	p = H->next;//pָ����Ԫ���
	if (p == NULL)printf("����Ϊ��\n");
	while (p != NULL)
	{
		printf("����:%s,�绰:%s\n", p->data.name, p->data.Tel); 
		p = p->next;
	}
	printf("\n");
}/* Print_LinkList*/

LinkList Creat_Linklist()
{
	LinkList L;
	LNode* s,* r;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	r = L;

	for (int i = 1; i <= 4; i++) {
		s = (LNode*)malloc(sizeof(LNode));
		printf("��%d��������\n", i);
		scanf("%s", s->data.name);
		printf("�绰��\n");
		scanf("%s", s->data.Tel);
		s->next = NULL;
		r->next = s;
		r = s;
	}

	return L;
}

Status nameInsert(LinkList L)
{
	char person[120];
	char Tel[10];

	LNode* s=NULL, * p1=NULL,* p2=NULL;
	p1 = L;
	p2 = L->next;
	s = (LNode*)malloc(sizeof(LNode));

	printf("����������\n");
	scanf("%s", person);
	printf("�绰��\n");
	scanf("%s", Tel);


	while (strcmp(p2->data.name, person) < 0 && p2)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	strcpy(s->data.name, person);
	strcpy(s->data.Tel, Tel);

	if (p2 != NULL) {
		s->next = p2;
		p1->next = s;
	}
	else {
		p1->next = s;
		s->next = NULL;
	}
	
	return OK;
}

Status nameDelete(LinkList L)
{
	char person[10];
	printf("����ɾ��������\n");
	scanf("%s", person);
	LNode* p1=NULL, * p2=NULL, *s=NULL;
	p1 = L;
	p2 = L->next;
	while (strcmp(p2->data.name, person) != 0 ) {
		p1 = p1->next;
		p2 = p2->next;
	}
	s = p2;
	p1->next = p2->next;
	free(s);

	return OK;
}

int main()
{
	LinkList L=Creat_Linklist();
	
	nameInsert(L);

	Print_LinkList(L);

	nameDelete(L);

	Print_LinkList(L);

	return 0;
}