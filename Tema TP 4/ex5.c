#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int  *v;
	v = (int*)malloc(8 * sizeof(int));
	v[0] = 22;
	v[1] = 15;
	printf("v[0]+1 = %d, avand adresa %x\n", v[0] + 1, v + 0);
	printf("v[0]-1 = %d, avand adresa %x\n", v[0] - 1, v + 0);
	v -= 1;
	printf("v[0] = %d, avand adresa %x\n", v[0] , v + 0);
	v += 2;
	printf("v[0]+1 = %d, avand adresa %x\n", v[0], v + 0);
	system("pause");
	return 0;
}