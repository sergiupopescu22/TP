#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void citire(int *v, int *n)
{
	printf("Cate elemente va avea vectorul? ");
	scanf("%d", n);
	v = realloc(v, (*n) * sizeof(int));
	for (int i = 0;i < *n;i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", v + i);
	}
}
void suma(int *v, int *n, int *s)
{

	for (int i = 0;i < *n;i++)
	{
		*s = *s + v[i];
	}

}
int main()
{
	int *v = NULL, *s = NULL, *n = NULL;
	n = (int*)malloc(4);
	s = (int*)malloc(4);
	v = (int*)malloc(4);
	*s = 0;
	citire(v, n);

	suma(v, n, s);
	printf("Suma elementelor vectorului este %d\n", *s);
	system("pause");
	return 0;
}