#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//char v[125];
void biti(char x)
{
	int i = 0;
	for (i = sizeof(char) * 8 - 1;i>= 0;i--)
	{	
		printf("%d", (x >> i) & 1);
	}
}
int main()
{
	int a, i1, i2, maxi=0;

	char v[125];
	for (int i = 0;i < 125;i++)
	{
		v[i] = v[i] & 0;
	}
	while (scanf("%d", &a))
	{
		i1 = a / 8;
		if (i1 > maxi)
			maxi = i1;
		i2 = a % 8;
		
		v[i1] = v[i1] | (1 << (7 - i2));
	}
	for(int i=0;i<=maxi;i++)
		biti(v[i]);
	system("pause");
	return 0;

}