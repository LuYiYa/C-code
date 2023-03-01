#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	/*char arr[] = "hello";*/

	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c'};

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	return 0;
}