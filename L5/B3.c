#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int st[100], vf = -1;
void push(int x,int *vf, int st[])
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
int main()
{
	int nr, x, aux, ok;
	printf("Cate numere se vor citi? ");
	scanf("%d", &nr);
	for (int i = 0;i < nr;i++)
	{
		printf("x = ");
		scanf("%d", &x);
		aux = x;
		vf = -1;
		ok = 1;
		while (aux)
		{
			push(aux % 10,&vf,st);
			aux /= 10;
		}
		aux = x;
		while (aux)
		{
			if (aux % 10 != peek(&vf,st))
			{
				ok = 0;
				break;
			}
			aux /= 10;
			vf--;
		}
		if (ok == 1)
			printf("Numarul este palindorm\n");
		else
			printf("Numarul nu este palindorm\n");

	}
	system("pause");
	return 0;
}