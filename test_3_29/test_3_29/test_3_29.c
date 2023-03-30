#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//strcpy
//char* strcpy(char *restrict dst, const char* restrict src)
//把src的字符串拷贝到dst
//restrict表明src和dst不重叠（c99）
//返回dst
//为了能链起代码来

//char* mycpy(char* dst, const char* src)
//{
//	//int idx = 0;
//	//while (src[idx]) {
//	//	dst[idx] = src[idx];
//	//	idx++;
//	//}
//
//	//dst[idx] = '\0';
//	char* ret = dst;
//	while (*dst++ = *src++) {
//		;
//	}
//		//*dst++ = *src++;
//		//dst++;
//		//src++;
//
//	*dst = '\0';
//
//	return ret;
//
//	//return dst;
//}
//
//int main(int argc, char const* argv[])
//{
//	char s1[] = "abc";
//	char s2[] = "Abc";
//	mycpy(s1, s2);
//
//	printf("%s", s1);
//
//	return 0;
//}

//char* strchr(const char* s, int c)
//char* strrchr(const char* s, int c)
//返回NULL表示没有找到

//int main(int argc, char const* acgv[])
//{
//	char s[] = "hello";
//	char* p = strchr(s, 'l');
//	char c = *p;
//	*p = '\0';
//	//p = strchr(p + 1, 'l');
//	char* t = (char*)malloc(strlen(s) + 1);
//	strcpy(t, s);
//	*p = c;
//	printf("%s\n",t);
//	free(t);
//	
//	return 0;
//}

//enum  枚举

//enum color {red, yellow, green};
//
//void f(enum color c);
//
//int main(void)
//{
//	enum color t = green;
//	
//	//scanf("%d", &t);
//	f(t);
//
//	return 0;
//}
//
//void f(enum color c)
//{
//	printf("%d\n", c);
//}

//enum COLOR {RED, YELLOW, GREEN, NumCOLORS};
//
//int main(int argc, char const* argv[])
//{
//	int color = -1;
//	char* ColorNames[NumCOLORS] = {
//		"red", "yellow", "green",
//	};
//	char* colorName = NULL;
//
//	printf("你最喜欢的颜色的代码：");
//	scanf("%d", &color);
//	if (color >= 0 && color < NumCOLORS) {
//		colorName = ColorNames[color];
//	}
//	else {
//		colorName = "unknown";
//	}
//	printf("你最喜欢的颜色是%s\n", colorName);
//
//	return 0;
//}

//enum COLOR {RED=1, YELLOW, GREEN=5, NumCOLORS};
//
//int main(int argc, char const* argv[])
//{
//	enum COLOR color = 0;
//
//	printf("code for GREEN is %d\n", GREEN);
//	printf("and color is %d\n", color);
//
//	return 0;
//}

//struct date {
//	int month;
//	int day;
//	int year;
//};
//
//int main(int argc, char const* argv[])
//{
//	struct date today;
//
//	today.month = 03;
//	today.day = 29;
//	today.year = 2023;
//
//	printf("Today's date is %i-%i-%i.\n",
//		today.year, today.month, today.day);
//
//	return 0;
//}

//struct date {
//	int month;
//	int day;
//	int year;
//};
//
//int main(int argc, char const* argv[])
//{
//	struct date today = { 03,29,2023 };
//	struct date thismonth = { .month = 3, .year = 2023 };
//
//	printf("Today's date is %i-%i-%i.\n",
//		today.year, today.month, today.day);
//	printf("This month is %i-%i-%i.\n",
//		thismonth.year, thismonth.month, thismonth.day);
//
//	return 0;
//}