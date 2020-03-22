#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int a, b, produs = 0;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	while (b > 0)
	{
		if (b & 1)
			produs += a;
		a=a << 1;
		b=b >> 1;

	}
	printf("%d", produs);
	system("pause");

}