#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int st1[100], vf1 = -1,st2[100], vf2 = -1;
void push(int x, int *vf, int st[])
{
	st[++(*vf)] = x;
}
void pop(int *vf, int st[])
{
	if (*vf == -1)
		printf("stiva este goala");
	else
		(*vf)--;
}
int peek(int *vf, int st[])
{
	return st[*vf];
}
void Print(int *vf, int st[])
{
	int k = *vf;
	while (k != -1)
	{
		printf("%d\n", st[k]);
		k--;
	}
}
int main()
{
	int x, aux, ok, i = 0;
	
	printf("x = ");
	scanf("%d", &x);
	aux = x;
	
	ok = 1;
	while (aux)//stiva decimal
	{
		push(aux % 10, &vf1, st1);
		aux /= 10;
	}
	aux = x;
	while (i<=15)//stiva binar
	{
		push((aux>>i)&1, &vf2, st2);
		i++;
	}
		
	while (aux)//verificare palindorm decimal
	{
		if (aux % 10 != peek(&vf1, st1))
		{
			ok = 0;
			break;
		}
		aux /= 10;
		vf1--;
	}
	
	while (st2[vf2]==0)
	{
		vf2--;
	}
	i = 0;
	aux = vf2;
	while (i<=aux)//verificare palindrom binar
	{
		if ((x >> i) & 1 != st2[vf2])
		{
			ok = 0;
			break;
		}
		vf2--;
		i++;
	}

	printf("\n");
	if (ok == 1)
		printf("Numarul este palindorm\n");
	else
		printf("Numarul nu este palindorm\n");
	printf("\n");
	
	system("pause");
	return 0;
}