#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<stdbool.h>
#define N 50
#include "Ex4.h"

/* Ricardo Takeshi Outi Miyamoto RA:2348144 */

int main()
{
	Fila *f, *f2;
	char a[N];
	int i;
	f = cria();
	f2 = cria();

	printf("\nDigite a sequencia: \n");
	fflush(stdin);
	gets(a);
	for (i = 0; a[i] != '\0'; i++)
		insere(f, a[i]);
	f2 = sequenciador(f);
	printf("\n\n");
	printf("RESULTADO:\n");
	imprime(f2);
	getch();
	return 0;
}
