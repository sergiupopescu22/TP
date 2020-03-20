#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct {
	int val, *urm;
}nod;

nod *adaugare(nod *prim,int x)
{
	nod *p;
	p = (nod*)malloc(sizeof(nod));
	p->urm = NULL;
	p->val = x;
	if (prim == NULL){
		prim = p;
	}
	else {
		nod *c;
		c = prim;
		while (c->urm != NULL)
		{
			c = c->urm;
		}
		c->urm = p;

	}

	return prim;

}
int main()
{
	int nr, i = 0, b, nrf = 0, p = 1;
	nod *prim, *a;
	prim = NULL;
	
	printf("Input = ");
	scanf("%d", &nr);
	while (i < 8) {
		b = (nr >> i) & 1;
		prim = adaugare(prim,b);
		i++;
	}
	a = prim;
	printf("Afisare lista(numar binar pe un octet, inversat)\n");
	while (a != NULL)
	{
		printf("%d",a->val);
		a = a->urm;
	}
	printf("\n");
	a = prim;
	while (a != NULL)
	{
		nrf = nrf + a->val * p;
		p = p * 10;
		a = a->urm;
	}
	printf("Numarul in binar este \n%d\n",nrf);
	system("pause");
	return 0;
	
}