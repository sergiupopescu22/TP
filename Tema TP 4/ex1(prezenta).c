#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int *v=NULL, *s=NULL, *n=NULL;
	n = (int*)malloc(4);
	s = (int*)malloc(4);
	
	*s = 0;
	printf("Cate elemente va avea vectorul? ");
	scanf("%d", n);
	v = realloc(v, (*n) * sizeof(int));
	for (int i = 0;i < *n;i++)
	{
		printf("v[%d] = ", i);
		scanf("%d", v + i);
	}
	for (int i = 0;i < *n;i++)
	{
		*s = *s + v[i];
	}
	
	
	printf("Suma elementelor vectorului este %d\n", *s);
	system("pause");
	return 0;
}