#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct ListNode {
//    char code[8];
//    struct ListNode* next;
//}ListNode, * Linklist;
//
//Linklist createlist()
//{
//    Linklist head, p, q;
//    char s[8];
//    scanf("%s", s);
//    head = (Linklist)malloc(sizeof(ListNode));
//    p = head;
//    while (s[0] != '#')
//    {
//        q = (Linklist)malloc(sizeof(ListNode));
//        strcpy(q->code, s);
//        p->next = q;
//        p = q;
//        scanf("%s", s);
//    }
//    p->next = NULL;
//    return head;
//};
///* 你的代码将被嵌在这里 */
//int countcs(Linklist head);
//int main()
//{
//    Linklist L;
//    L = createlist();
//    printf("%d", countcs(L));
//}
///* 请在这里填写答案 */
//int countcs(struct ListNode* head)
//{
//    Linklist p = head->next;
//    int cnt = 0;
//    while (p != NULL)
//    {
//        if (p->code[1] == '0' && p->code[2] == '2') 
//        {
//            cnt++;
//        }
//
//        p = p->next;
//    }
//    return cnt;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef int ElemType;

typedef  struct 
{
    ElemType* elem; //存储空间基址，体现动态性
    int   length;     //当前表的长度
    int   listsize;   //当前分配的存储容量
}SqList;

int InitList_Sq(SqList &L); 
void Listinput(SqList &L); 
void steMUl(SqList &Lc , SqList &La , SqList &Lb);//求出La和Lb的交集，放在Lc中
void print_List(SqList &L);//打印交集


int main()
{
    SqList La, Lb, Lc;
    InitList_Sq(La);  //初始化3个线性表
    InitList_Sq(Lb);
    InitList_Sq(Lc);
    Listinput(La); //输入La的值
    Listinput(Lb);//输入Lb的值
    steMUl(Lc, La, Lb);//求出La和Lb的交集，放在Lc
    print_List(Lc);//打印交集
    return 0;
}

int InitList_Sq(SqList& L)
{
    L.length = 0;
    L.listsize = 200;
    L.elem = (ElemType*)malloc(200*sizeof(ElemType));

    return 1;
}
void Listinput(SqList& L)
{
    int val;
    scanf("%d", &val);

    while(val!=0)
    {
        L.elem[L.length] = val;
        L.length++;
        scanf("%d", &val);
    }

}

void steMUl(SqList& Lc, SqList& La, SqList& Lb)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < La.length; i++)
    {
        for (j = 0; j < Lb.length; j++)
        {
            if (La.elem[i] == Lb.elem[j])
            {
                Lc.elem[Lc.length] = La.elem[i];
                Lc.length++;
            }
        }
    }

    return ;
}

void print_List(SqList &L)
{
    int i = 0;

    for (i = 0; i < L.length; i++)
    {
        printf("%d ", L.elem[i]);
    }

    if (L.length == 0)
    {
        printf("empty class");
    }

    return ;
}