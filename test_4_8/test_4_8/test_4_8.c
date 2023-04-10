#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//数字逆序输出

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
//	for (j = 9; j >=0; j--){
//		scanf("%d", a[j]);
//	}
//
//	return 0;
//}

//自定义函数处理最大公约数与最小公倍数

//void max_min(int a, int b)
//{
//	int max, min, i;
//
//	for (i = 1; i <= a && i <= b; i++) {
//		if (a % i == 0 && b % i == 0)
//			max = i;
//	}
//
//	min = a * b / max;
//
//	printf("%d %d", max, min);
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	max_min(a, b);
//
//	return 0;
//}


void da(double a, double b, double delta)
{
	double x1, x2;

	printf("x1=-0.125+0.484i x2=-0.125-0.484i")
}
void deng(double a, double b, double delta)
void xiao(double a, double b, double delta)

int mian()
{
	double a, b, c;
	scanf("%d %d", &a, &b, &c);
	
	double delta = 1.0*b * b - 4 * a * c;
	if (delta > 0)
		 da(double a, double b, double delta);
	else if (delta == 0)
		 deng(double a, double b, double delta);
	else
		 xiao(double a, double b, double delta);

	return 0;
}