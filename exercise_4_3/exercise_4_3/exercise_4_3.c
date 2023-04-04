#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main(int argc, char const* argv[])
//{
//	printf("This program sums a series of integers.\n"
//		"Enter integers (0 to terminate):");
//
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	while (a != 0) {
//		sum += a;
//		scanf("%d", &a);
//	}
//
//	printf("The sum is: %d", sum);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 3 == 0) {
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n, i, j;
//	int a, b, c;
//
//	scanf("%d %d %d", &n, &i, &j);
//
//	for (a = i, b = 1; b <= n; b++) {
//		printf("(%d,%d)", a, b);
//	}
//
//	printf("\n");
//
//	for (a = 1, b = j; a <= n; a++) {
//		printf("(%d,%d)", a, b);
//	}
//
//	printf("\n");
//
//	for (a = 1; a <= n; a++) {
//		for (b = 1; b <= n; b++) {
//			if ((a - b) == (i - j)) {
//				printf("(%d,%d)", a, b);
//			}
//		}
//	}
//
//	printf("\n");
//
//	for (b = 1; b <= n; b++) {
//		for (a = 1; a <= n; a++) {
//			if ((a + b) == (i + j)) {
//				printf("(%d,%d)", a, b);
//			}
//		}
//	}
//
//	return 0;

#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n%d\n", a, b);

	int m, n;
	if (b >= 10&&a!=0) {
		int i, j;
		i = b % 10;
		j = b / 10;
		m = i * a;
		n = j * a;
		printf("%d\n%d\n%d", m, n, m+n*10);
	}
	else if (b<=10||a==0) {
		printf("%d", a * b);
	}

	return 0;
}