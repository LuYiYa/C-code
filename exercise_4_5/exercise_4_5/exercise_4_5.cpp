#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//利润计算
// 
//int main()
//{
//	 int i;
//	scanf("%d", &i);
//
//	 int j;
//	if (i <= 100000){
//		j = i * 0.1;
//	}
//	else if(i <= 200000&&i>100000) {
//		j = (i - 100000) * 0.075 + 10000;
//	}
//	else if (i <= 400000&&i>200000) {
//		j = (i - 200000) * 0.05 + 17500;
//	}
//	else if (i <= 600000&&i>400000) {
//		j = (i - 400000) * 0.03 + 27500;
//	}
//	else if (i <= 1000000&&i>600000) {
//		j = (i - 600000) * 0.015 + 33500;
//	}
//	else {
//		j = (i - 1000000) * 0.01 + 39500;
//	}
//
//
//	printf("%d", j);
//
//	return 0;
//}

//最大公约数和最小公倍数

//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//
//	int i;
//	int j=0;
//	for (i = 1; i <= m && i <= n; i++) {
//		if (m % i == 0 && n % i == 0) {
//			j = i;
//		}
//	}
//
//	printf("%d %d", j, m*n/j);
//
//	return 0;
//}

//字符串分类

//int main()
//{
//	char a;
//
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	while ((a = getchar()) != '\n')
//	{
//		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//			b++;
//		else if (a >= '0' && a <= '9')
//			c++;
//		else if (a == ' ')
//			d++;
//		else
//			e++;
//	}
//
//	printf("%d %d %d %d\n", b, c, d, e);
//
//	return 0;
//}

//Sn的公式求和

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int Sn = 0;
//
//	int i;
//	int x=0;
//	for (i = 1; i <= n; i++) {
//		x = x * 10 + 2;
//		Sn += x;
//	}
//
//	printf("%d", Sn);
//
//	return 0;
//}

//阶乘求和

//int main()
//{
//	int n;
//	long long int Sn=0;
//	scanf("%d", &n);
//
//	int i = 1;
//	long long int x = 1;
//	
//	for (i = 1; i <= n; i++) {
//		x *= i;
//		Sn += x;
//	}
//
//	printf("%lld", Sn);
//	return 0;
//}

//求和训练

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	double A=0, B=0, C=0;
//	int i = 1;
//	for (i = 1; i <= a; i++) {
//		A += i;
//	}
//
//	for (i = 1; i <= b; i++) {
//		B += i * i;
//	}
//
//	for (i = 1; i <= c; i++) {
//		C += 1.0 / i;
//	}
//
//	double sum = A + B + C;
//	printf("%.2lf", sum);
//
//	return 0;
//}

//水仙花数判断
//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 999; i++) {
//		int x;
//		x = pow(i % 10, 3) + pow(i / 100, 3) + pow(i / 10 % 10, 3);
//		if (x == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//完数的判断

int main()
{
	int N;
	scanf("%d", &N);

	int i;
	int j;
	int a[1001];
	for (i = 1; i <= N; i++) {
		int sum = 0;
		int k = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
				a[k++] = j;
			}
		}
		if (sum == i) {
			printf("%d its factors are", i);
			for (j = 0; j < k; j++)
			{
				printf(" %d", a[j]);
			}
			printf("\n");
		}
	}

	return 0;
}