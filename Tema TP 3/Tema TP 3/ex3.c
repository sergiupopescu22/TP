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

	int n;
	printf("n = ");
	scanf("%d", &n);
	show_bits(n);
	printf("\n");
	if (((n >> 31) & 1)==0)
		printf("nr este pozitiv");
	else
		printf("nr este negativ");
	system("pause");

}