#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#define N 50
#include "Fila.h"

/* Ricardo Takeshi Outi Miyamoto  RA:2348144 */


int main(){
	int a, op;
	char c[N];
	char *s;
	Fila *f;
	f=cria();
	do{
		system("cls");
		printf("\n\nMENU");
		printf("\n1-Adicionar um aviao a fila de espera");
		printf("\n2-Autorizar a decolagem do primeiro aviao da fila");
		printf("\n3-Listar todos os avioes na fila de espera");
		printf("\n4-Listar o numero de avioes aguardando na fila de decolagem");
		printf("\n5-Listar as caracteristicas do primeiro aviao da fila");
		printf("\n6-SAIR\n");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("\nDIGITE O NUMERO IDENTIFICADOR:\n");
				scanf("%d", &a);
				printf("\nDIGITE O NOME DO AVIAO:\n");
				fflush(stdin);
				gets(c);
				insere(f, a, c);
				break;
			case 2:
				s = retira(f, &a);
				printf("\nDECOLAGEM AUTORIZADA:");
				printf("\nNUM IDENT: %d", a);
				printf("\nNOME: %s", s);
				break;
			case 3:	
				printf("\n");
				printf("\nAVIOES NA FILA DE ESPERA:\n");
				imprime(f);
				break;
			case 4:
				a = quant_elementos(f);
				printf("\nNUMERO DE AVIOES NA FILA: %d", a);
				break;
			case 5:
				printf("\n");
				listar_primeiro(f);
				break;
			case 6:
				printf("SAIR");
				break;
			default:
				printf("\nVALOR INVALIDO!");
				break;
		}
		printf("\nPressione <enter> para continuar");
		getch();
	}while(op!=6);
	
	return 0;
}
