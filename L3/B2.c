#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void show_bits(int x)
{
	for (int i = sizeof(int) * 8 - 1;i >= 0;i--)
	{
		printf("%d", (x >> i) & 1);
	}
}

int main()
{

	int c, n, x, *v, contor = 0;
	v = NULL;
	printf("c=");
	scanf("%d", &c);
	printf("n=");
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &x);
		if ((x >> c) & 1)
		{
			contor++;
			v = (int*)realloc(v, sizeof(int)*contor);
			*(v + contor - 1) = x;
		}
	}
	for (int i = 0;i < contor;i++)
		printf("%d ", v[i]);
	system("pause");

}