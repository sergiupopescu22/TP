#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void biti(char a)
{
	int i;
	for (i = 4;i >= 0;i--)
		printf("%d", (a >> i) & 1);
}
int main()
{
	int caz, verificare, v[10], contor = 0, i;

	
	do {
		printf("1.Adugare utilizator\n");
		printf("2.Verificare permisiune utilizator\n");
		printf("3.Iesire\n");
		scanf("%d", &caz);
		switch (caz)
		{
		case 1:
			verificare = 0;
			contor++;
			v[contor] = 0;
			printf("Permisiune Read?\n");
			scanf("%d", &verificare);
			if (verificare == 1)
				v[contor] = v[contor] | 1;

			verificare = 0;
			printf("Permisiune Write?\n");
			scanf("%d", &verificare);
			if (verificare == 1)
				v[contor] = v[contor] | (1 << 1);

			verificare = 0;
			printf("Permisiune Delete?\n");
			scanf("%d", &verificare);
			if (verificare == 1)
				v[contor] = v[contor] | (1 << 2);

			verificare = 0;
			printf("Permisiune Rename?\n");
			scanf("%d", &verificare);
			if (verificare == 1)
				v[contor] = v[contor] | (1 << 3);

			verificare = 0;
			printf("Permisiune Copy?\n");
			scanf("%d", &verificare);
			if (verificare == 1)
				v[contor] = v[contor] | (1 << 4);

			biti(v[contor]);
			printf("\n");
			break;
		case 2:
			printf("Permisiunile carui utilizator doriti sa le vizualizati?\n");
			scanf("%d", &i);
			if (1 & (v[i] >> 0))
				printf("Read\n");
			if (1 & (v[i] >> 1))
				printf("Write\n");
			if (1 & (v[i] >> 2))
				printf("Delete\n");
			if (1 & (v[i] >> 3))
				printf("Rename\n");
			if (1 & (v[i] >> 4))
				printf("Copy\n");
			
			break;
		default:
			printf("Optiune invalida\n");
			break;
		}
	} while (caz != 3);
	system("pause");
	return 0;
}