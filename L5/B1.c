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
	while (k!=-1)
	{
		printf("%d\n", st[k]);
		k--;
	}
}
int main()
{
	int nr, x, bin = 0, p = 1;
	printf("cate numere se citesc?");
	scanf("%d", &nr);
	for (int i = 0;i < nr;i++)
	{	
		bin = 0;
		p = 1;
		printf("x = ");
		scanf("%d", &x);
		x = ~x;
		for (int j = 0;j < 8;j++)
		{
			bin = bin + ((x >> j)&1)*p;
			p *= 10;
		
			
		}
		
		push(bin);
		afisare();
		
	}
	system("pause");
	return 0;

}