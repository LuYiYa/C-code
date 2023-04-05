#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//密码破译

//int main()
//{
//	char c1, c2, c3, c4, c5;
//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
//
//	c1 += 4;
//	c2 += 4;
//	c3 += 4;
//	c4 += 4;
//	c5 += 4;
//
//	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
//
//	return 0;
//}

//温度转换

//int main()
//{
//	double F, c;
//
//	scanf("%lf", &F);
//	
//	c = 5 * (F - 32) / 9;
//
//	printf("c=%0.2lf", c);
//
//	return 0;
//
//}

//成绩评定

//int main()
//{
//	int a, n;
//	scanf("%d", &a);
//	n = a / 10;
//
//	switch (n)
//	{
//	case 0:
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("E\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 9:
//	case 10:
//		printf("A\n");
//		break;
//
//	}
//
//	return 0;
//}


//数字的处理与判断

#include<string.h>
#include<math.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	int b = a;
	int cnt = 1;
	while (b /= 10) {
		cnt++;
	}
	printf("%d\n", cnt);

	int i;
	for (i = cnt - 1; i >= 0;i--) {
		b = a / pow(10, i);
		if (i > 0) {
			printf("%d ", b % 10);
		}
		else {
			printf("%d\n", b % 10);
		}
	}

	b = a;
	while (b) {
		printf("%d", b % 10);
		b /= 10;
	}

	return 0;
}

//int main()
//{
//	char a[6];
//	scanf("%s", a);
//
//	int len = strlen(a);
//	printf("%d\n", len);
//
//	int i;
//	for (i = 0; i<len ; i++) {
//		if (i < len - 1)
//			printf("%c ", a[i]);
//		else
//			printf("%c\n", a[i]);
//	}
//
//	int j;
//	for (j = len - 1; j >= 0; j--) {
//		printf("%c", a[j]);
//	}
//
//	return 0;
//}