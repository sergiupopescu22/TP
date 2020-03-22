#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	
	int n, s = 0;
	printf("n = ");
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		for (int j = 0;j <= 31;j++)
			if ((i>>j)&1==1)
				s++;
	}
	printf("%d\n", s);
	system("pause");

}