#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int a, b, produs = 0;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a,b);
	system("pause");

}