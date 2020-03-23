#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int vf = -1, st[100];
void push(int x)
{
	st[++vf] = x;

}
void pop()
{
	if (vf == -1)
		printf("nu sunt elemente in lista");
	else
		vf--;
}
int peek()
{
	return st[vf];
}
void afisare()
{
	int k = vf;
	while (k != -1)
	{
		printf("%d\n", st[k]);
		k--;
	}
}
int main()
{
	int c,nr, x, bin = 0, p = 1;
	printf("Introduceti valoarea lui C: ");
	scanf("%d", &c);
	printf("cate numere se citesc? ");
	scanf("%d", &nr);
	for (int i = 0;i < nr;i++)
	{
		
		printf("x = ");
		scanf("%d", &x);
		if((x>>c)&1==1)
			push(x);
		

	}
	afisare();
	system("pause");
	return 0;

}