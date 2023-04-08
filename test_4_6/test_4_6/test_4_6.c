#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//有规律的数列求和
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	float sum = 2/1.0;
//
//	float a = 2.0; 
//	float b = 1.0;
//	for (int i = 2; i <= N; i++) {
//		a = a + b;
//		b = a - b;
//		sum += a / b;
//	}
//
//	printf("%.2lf", sum);
//
//	return 0;
//}

//自由下落的距离计算
//int main()
//{
//	double m;
//	int n;
//	scanf("%lf %d", &m, &n);
//
//	double j = m;
//	double sum = 0.0;
//	for (int i = 1; i <= n; i++) {
//		sum = sum+2*m;
//		m /= 2;
//	}
//	sum -= j;
//
//	printf("%.2lf %.2lf", m, sum);
//
//	return 0;
//}

//猴子吃桃的问题
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int sum = 1;
//	for (int i = 1; i < n; i++) {
//		sum = (sum + 1) * 2;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//筛选N以内的素数

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++) {
//		int j = 2;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0)
//				break;
//		}
//		if (j == i) {
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

//选择排序

//int main()
//{
//	int a[10];
//	
//	int i;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	int j;
//	for (i = 0; i < 9; i++) {
//		for (j = i; j < 9; j++) {
//			int temp;
//			if (a[i] > a[j + 1]) {
//				temp = a[i];
//				a[i] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}

//矩阵对角线求和

//int main()
//{
//	int a[9];
//
//	int i;
//	for (i = 0; i < 9; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	int z = a[0] + a[4] + a[8];
//	int f = a[2] + a[4] + a[6];
//
//	printf("%d %d", z, f);
//
//	return 0;
//}

//数组插入处理

//int main()
//{
//	int a[10];
//
//	int i;
//	for(i=0;i<10;i++)
//	scanf("%d", &a[i]);
//
//	for (i = 9; i > 0; i--) {
//		if (a[i] < a[i - 1]) {
//			int temp = a[i];
//			a[i] = a[i - 1];
//			a[i - 1] = temp;
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//		printf("%d\n", a[i]);
//
//	return 0;
//}

