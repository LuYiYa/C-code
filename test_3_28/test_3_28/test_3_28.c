#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//动态内存分布
#include <stdlib.h>

//int main(void)
//{
//	int number;
//	int* a;
//	int i;
//	printf("输入数量：");
//	scanf("%d", &number);
//	//int a[number];
//	a = (int*)malloc(number * sizeof(int));
//	for (i = 0; i < number; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = number - 1; i >= 0; i--) {
//		printf("%d", a[i]);
//	}
//	free(a);
//	
//	return 0;
//}

//int mian(void)
//{
//	void* p;
//	int cnt = 0;
//	while ((p = malloc(100 * 1024 * 1024))) {
//		cnt++;
//	}
//	printf("分配了%d00MB的空间\n", cnt);
//	free(p);
//	return 0;
//}

//int main(void)
//{
//	int i;
//	void* p = 0;
//	int cnt = 0;
//	//p = malloc(100 * 1024 * 1024);
//	//p++;
//	
//	free(1);
//
//	return 0;
//}

//int main(int acgv, char const* argv[])
//{
//	int ch;
//
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//
//	printf("EOF\n");
//
//	return 0;
//}

//int main(void)
//{
//	char *a[] = {
//		"Hello",
//		"world",
//		"adkhfjahsdklhadl"
//	};
//
//	return 0;
//}

//int main(int argc, char const* argv[])
//{
//	int i;
//
//	for (i = 0; i < argc; i++) {
//		printf("%d:%s\n", i, argv[i]);
//	}
//
//	return 0;
//}

#include<string.h>

//strlen
//size_t strlen(const char *s);
//返回s的字符串长度（不包过结尾的0）

//size_t mylen(const char* s)
//{
//	int idx = 0;
//	while (s[idx] != '\0') {
//		idx++;
//	}
//
//	return idx;
//}
//
//int main(int acgc, char const* acgv[])
//{
//	char line[] = "Hello";
//	printf("strlen=%lu\n", mylen(line));
//	printf("sizeof=%lu\n", sizeof(line));
//
//	return 0;
//}

//strcmp
//int strcmp(const char* s1, const char* s2)
//比较两个字符串，返回：
//0 : s1 == s2;
//1 : s1 > s2;
//2 : s1 < s2;

int mycmp(const char* s1, const char* s2)
{
	//int idx = 0;
	//while (s1[idx] == s2[idx] && s1[idx] != 0) {
	//	//if (s1[idx] != s2[idx]) {
	//	//	break;
	//	//}
	//	//else if (s1[idx] == '\0') {
	//	//	break;
	//	//}
	//	idx++;
	//}
	while (*s1 == *s2 && *s1 != '\0') {
		s1++;
		s2++;
	}

	return *s1 - *s2;
}

int main(int acgc, char const* acgv[])
{
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n", mycmp(s1, s2));

	return 0;
}