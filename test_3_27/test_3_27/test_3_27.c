#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char word[8];
//	char word2[8];
//	scanf("%s", word);
//	scanf("%s", word2);
//	printf("%s##%s##\n", word, word2);
//
//	return 0;
//}

//void f(void)
//{
//	char word[8];
//	char word2[8];
//	scanf("%7s", word);
//	scanf("%7s", word2);
//	printf("%s##%s##\n", word, word2);
//}
//
//int main()
//{
//	f();
//
//	return 0;
//}

//�ַ�������
#include<string.h>

//strlen ����s���ַ������ȣ���������β��0��
//int main(int argc, char const* argv[])
//{
//	char line[] = "Hello";
//	printf("strlen=%lu\n", strlen(line));
//	printf("strlen=%lu\n", sizeof(line));
//
//	return 0;
//}

//strcmp �Ƚ������ַ����� ���أ�
//  0 : s1 == s2;
//  1 : s1 > s2;
//- 1 : s1 < s2;
//int main(int argc, char const* argv[])
//{
//	char s1[] = "abc";
//	char s2[] = "Abc";
//	printf("%d\n", strcmp(s1, s2));
//	return 0;
//}

//strcpy �Ѻ�һ���ַ���������ǰһ��֮��
//		 �����ַ������ص���c99��
//		 ����ǰһ���ַ���
//		 Ϊ�������������

//strcat �Ѻ�һ���ַ�����������һ���ĺ��棬 
//		 �ӳ�һ�������ַ���
//		 ����ǰһ���ַ���
//		 ǰһ���ַ�����������㹻�Ŀռ�

//strcpy��strcat����ȫ��ǰһ���ַ���û���㹻�ռ�ͻᱨ��
//��ʱ����strncpy��strncat,����strncpy(s1, s2, n);
//��n���ƺ�һ������ǰһ�����ַ�����
//strncmp���ڱȽ�ǰ��λ�ַ��Ĵ�С��ϵ

//void swap(int* pa, int* pb);
//
//int main(void)
//{
//	int a = 5;
//	int b = 6;
//	swap(&a, &b);
//
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}

//void f(int* p);
//void g(int k);

//int main(void)
//{
//	int i = 6;
//	int* p;
//	int k;
//	k = 12;
//	*p = 12;
//
//	printf("&i=%p\n", &i);
//	f(&i);
//	g(i);
//
//	return 0;
//}
//
//void f(int* p)
//{
//	printf(" p=%p\n", p);
//	printf("*p=%d\n", *p);
//	*p = 26;
//}

//void g(int k)
//{
//	printf("k=%d\n", k);
//}

//int main(void)
//{
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9, };
//	char* p = ac;
//	char* p1 = &ac[5] ;
//	printf("p = %p\n", p);
//	printf("p+1 = %p\n", p + 1);
//	printf("p1-p = %d\n", p1 - p);
//
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9, };
//	int* q = ai;
//	int* q1 = &ai[6];
//	printf("q = %p\n", q);
//	printf("q1 = %p\n", q1);
//	printf("q1-q = %d\n", q1 - q);
//
//
//	return 0;
//}

//int main(void)
//{
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1, };
//	char* p = ac;
//	int i;
//	for (i = 0; i < sizeof(ac) / sizeof(ac[0]); i++) {
//		printf("%d\n", ac[i]);
//	}
//
//	//for( p=ac; *p!=-1 ;p++ )
//	while (*p!= -1) {
//		printf("%d\n", *p++);
//	}
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9, };
//	int* q = ai;
//	//p = q;
//
//	return 0;
//}

