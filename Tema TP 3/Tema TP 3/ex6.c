#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void show_bits(unsigned  x)
{
	for (int i = sizeof(unsigned char) * 8 - 1;i >= 0;i--)
	{
		printf("%d", (x >> i) & 1);
	}
}
void number(unsigned  x)
{
	int contor = 0;

	for (int i = sizeof(unsigned char) * 8 - 1;i >= 0;i--)
	{
		if ((x >> i) & 1)
			contor++;
	}
	for (int i = 7;i >= 0;i--)
	{
		if(contor > 0)
			printf("1");
		else
			printf("0");
		contor--;
	}
}
int main()
{
	int  n;

	printf("n = ");
	scanf("%d", &n);
	show_bits(n);
	printf("\n");
	number(n);
	
	
	system("pause");
	return 0;

}