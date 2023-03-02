#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//转义字符 \t（水平制表符，作用类似于键盘 Tab）
	printf("D:code\test\test_3_1.c");

	//转义字符 \n（换行）
	printf("\nice!\n");
    
	//转义字符 \?（防止三字母词）
	printf("(are you okk\?\?)");

	//转义字符 \'(表示字符号 ', \"同理:表示字符串里的 " )
	printf("\n%c\n", '\'');

	//转义字符 \\（使转义字符再次转义）
	printf("D:code\\test\\test_3_1.c\n");

	//转义字符 \a（表示警告，并且运行时伴随电脑的警告声）
	printf("\a");

	return 0;
}