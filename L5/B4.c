#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define M 100

void Push(int x, int *vf, int st[])
{
	if ( (*vf + 1)== M)
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
void Print(int *vf,int st[])
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
	int st[100], vf = -1;
	Push(2,&vf,st); Print(&vf, st);
	printf("\n");
	Push(5, &vf, st); Print(&vf, st);
	printf("\n");
	Push(10, &vf, st); Print(&vf, st);
	printf("\n");
	Pop(&vf, st); Print(&vf, st);
	printf("\n");
	Push(12, &vf, st); Print(&vf, st);
	printf("\n");
	Push(2, &vf, st); Print(&vf, st);
	printf("\n");
	Push(5, &vf, st); Print(&vf, st);
	printf("\n");
	Push(10, &vf, st); Print(&vf, st);
	printf("\n");
	Pop(&vf, st); Print(&vf, st);
	printf("\n");
	Push(12, &vf, st); Print(&vf, st);
	printf("\n");
	system("pause");
	return 0;
}