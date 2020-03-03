#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void citire(int *v, int *nr)
{
	FILE *fisier;
	int numar, contor = 0;
	fisier = fopen("date.in", "rt");
	
	while (fscanf(fisier, "%d", &numar)!=EOF)
	{
		contor++;
		v = (int*)realloc(v, contor * sizeof(int));
		v[contor-1] = numar;
		//printf("%d\n", v[contor-1]);
	}
	*nr = contor;
}

int cmpfunc(const void * a, const void * b) {
	return (*(int*)a - *(int*)b);
}

void cautare_liniara(int *v,int  n,int a)
{
	int i;
	for (i = 0;i < n;i++)
		if (v[i] == a)
			printf("Numarul se afla pe pozitia %d", i+1);

}

void cautare_binara(int *v, int n, int a)
{
	int Sol = -1, stanga = 0, dreapta = n;
	while (stanga <= dreapta)
	{
		int Mid = (stanga + dreapta) / 2;
		if (v[Mid] == a)
		{
			Sol = Mid;
			break;
		}
		if (v[Mid] > a)
			dreapta = Mid - 1;
		if (v[Mid] < a)
			stanga = Mid + 1;
	}
	printf("Numarul se afla pe pozitia %d", Sol+1);
}

int main()
{
	int *v, n = 0, caz = 0, a = 0;
	v = (int*)malloc(sizeof(int));
	
	citire(v, &n);
	printf("Ce cautare doriti sa folositi?\n");
	printf("1. Cautare liniara\n");
	printf("2. Cautare binara(include sortarea vectorului)\n");
	scanf("%d", &caz);
	switch (caz) {
	case 1:
		printf("Numarul cautat este: ");
		scanf("%d", &a);
		cautare_liniara(v,n,a);
		break;
	case 2:
		printf("Numarul cautat este: ");
		scanf("%d", &a);
		qsort(v, n, sizeof(int), cmpfunc);
		cautare_binara(v,n,a);
		break;
	default: printf("Optiune gresita\n");
		break;
	}
	
	

	
	system("pause");
}