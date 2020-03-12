#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void show_bits(int  x)
{
	for (int i = sizeof(int) * 8 - 1;i >= 0;i--)
	{
		printf("%d", (x >> i) & 1);
	}
}

int main()
{
	int  n, s, sau = 0;
	
	printf("n = ");
	scanf("%d", &n);
	while (n > 0)
	{
		printf("s = ");
		scanf("%d", &s);
		sau = sau | s;
		n--;
	}
	show_bits(sau);
	printf("\n");
	if (sau & 1)
		printf("rezultatul este impar");
	else
		printf("rezultatul este par");
	
	//o alta metoda era sa verific daca exista cel putin un nr impar => rezultatul era impar

	system("pause");
	return 0;

}