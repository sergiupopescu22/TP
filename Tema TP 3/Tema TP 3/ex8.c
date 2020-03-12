#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() //am folosit aceeasi metoda ca la inmultirea a doua numere folosind operatii pe biti
{

	int a, b, produs = 0;
	printf("a = ");
	scanf("%d", &a);
	b = a;
	while (b > 0)
	{
		if (b & 1)
			produs += a;
		a = a << 1;
		b = b >> 1;

	}
	printf("%d", produs);
	system("pause");

}