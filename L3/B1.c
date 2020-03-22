//1. Sa se scrie un program care citeste de la tastura "N" numere naturale.Pentru fiecare numar se va determina forma lui binara, se va calcula inversul binar, 
//iar mai apoi se va afisa numarul zecimal calculat din inversul binar.
//Ex:
//27
//0001 1011
//1110 0100
//228
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void show_bits(int x)
{
	for (int i = sizeof(int) * 8 - 1;i >= 0;i--)
	{
		printf("%d", (x >> i) & 1);
	}
}
void show_bits_inverted(int *x)
{
	*x = ~*x;
	for (int i = sizeof(int) * 8 - 1;i >= 0;i--)
	{
		printf("%d", (*x >> i) & 1);
	}
}
int main()
{
	int n = 0, x = 0, p = 1, nr = 0;
	printf("n = ");
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		p = 1;
		printf("x = ");
		scanf("%d", &x);
		show_bits(x);
		printf("\n");
		show_bits_inverted(&x);
		printf("\n%d", x);
		for (int j = 0;j <=7;j++)//valoare in decimal fara semn a primilor 8 biti
		{
			
			nr = nr + p * ((x >> j) & 1);
			p = p * 2;
		}
		printf("\n%d", nr);

	}
	system("pause");

}