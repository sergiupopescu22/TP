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
int prim(int x)
{
	int d = 2;
	if (x == 1)
		return 0;
	for (d = 2;d <= x / 2;d++)
	{
		if (x%d == 0)
			return 0;
	}
	return 1;
}
void delete(int i,int *vf, int st[])
{
	if (*vf == i)
	{
		Pop(vf, st);
	}
	else
	{
		int k = Peek(vf, st);
		Pop(vf, st);
		delete(i, vf, st);
		Push(k, vf, st);
	}
}
int main()
{   
	int vf1 = -1, vf2 = -1, st1[100], st2[100],bin, p = 1;
	for (int i = 50;i >= 1;i--)
		Push(i, &vf1, st1);
	Print(&vf1, st1);
	printf("\n");
	for (int i = vf1;i >= 0;i--)
		if (prim(st1[i]) == 1)
			delete(i, &vf1, st1);
	Print(&vf1, st1);
	for (int i = 0;i <= vf1;i++)
	{
		bin = 0;
		p = 1;
		for (int j = 0;j <= 7;j++)
		{
			bin = bin + ((st1[i] >> j) & 1)*p;
			p *= 10;
		}
		Push(bin, &vf2, st2);
	}
	printf("\n");
	Print(&vf2, st2);
	system("pause");
	return 0;
}