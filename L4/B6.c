#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int *suma(int a, int b)
{
	int *s = NULL;
	s = (int*)malloc(sizeof(int));
	*s = 0;
	*s = a + b;
	return s;
}
int main()
{
	int a, b;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("suma este %d\n", *suma(a, b));
	system("pause");
	return 0;
}