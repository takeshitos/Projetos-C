#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Ex3.h"

/* Ricardo Takeshi Outi Miyamoto  RA: 2348144 */

int main()
{
	Fila *f;
	f = cria();
	int op, a;
	do{
		system("cls");
		printf("\nMENU\n");
		printf("\n1-INSERIR");
		printf("\n2-REMOVER");
		printf("\n3-INFORMAR TAMANHO");
		printf("\n4-IMPRIMIR");
		printf("\n5-SAIR\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				printf("\nDIGITE O VALOR A SER INSERIDO:\n");
				scanf("%d", &a);
				insere(f, a);
				break;
			case 2:
				a = retira(f);
				printf("\nVALOR REMOVIDO: %d", a);
				break;
			case 3:
				a = quant_elementos(f);
				printf("\nTAMANHO DA FILA: %d", a);
				break;
			case 4:
				printf("\n\n");
				imprime(f);
				break;
			default:
				printf("\nVALOR INVALIDO!");
				break;
		}
		printf("\nPressione <enter> para continuar");
		getch();
		
	}while(op!=5);
	return 0;
}
