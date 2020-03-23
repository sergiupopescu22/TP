#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define M 100

void Push(int x, int *vf, int st[])
{
	if ((*vf + 1) == M)
		printf("Stiva este plina");
	else
		st[++(*vf)] = x;
}
void Pop(int *vf, int st[])
{
	if (*vf == -1)
		printf("stiva este goala");
	else
		(*vf)--;
}
int Peek(int *vf, int st[])
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
int numarare(int *vf,int st[])
{
	int contor = 0, j;
	j = *vf;
	while (j >= 0)
	{
		if (st[j] == 1)
			contor++;
		j--;
	}
	return contor;

}
int main()
{
	int vf = -1, st[100], nr, aux, bin = 0, p = 1, b, val = 0, dif, putere = 1;
	do{
		printf("Numarul este ");
		scanf("%d", &nr);
	} while (nr > 255);
	for (int i = 0;i <= 7;i++)
	{
		bin = bin + ((nr >> i) & 1)*p;
		Push((nr >> i) & 1, &vf, st);
		p *= 10;
	}
	Print(&vf, st);
	b = numarare(&vf, st);
	
	val = 0;
	dif = vf-b+1;
	while (b > 0)
	{
		val = val * 10 + 1;
		b--;
	}

	while (dif)
	{
		putere = putere * 10;
		dif--;
	}
	val = val * putere;
	printf("\nvaloare maxim = %d\n", val);
	system("pause");
	return 0;
}