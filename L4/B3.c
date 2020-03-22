#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int a, b, *aux;
	aux = (int*)malloc(sizeof(int));
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	*aux = a;
	a = b;
	b = *aux;
	printf("a = %d si b = %d", a, b);
	system("pause");
	return 0;
}