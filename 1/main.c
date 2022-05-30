//Ricardo Takeshi Outi Miyamoto
//RA: 2348144

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "Exercicio1.h"
#define MAX 80

int main(int argc, char *argv[]) {
	Pilha *p;
	srand(time(NULL));
	int i, j;
	p=cria();
	j=1;
	for(i=1;i<=30;i++){
		push(p, rand()%100, j);
	}
	j=2;
	for(i=1;i<=50;i++){
		push(p, rand()%100, j);
	}
	printf("\nPILHA 1:\n");
	imprime(p, 1);
	printf("\nPILHA 2:\n");
	imprime(p, 2);
	
	printf("\n\n");
	printf("PILHA1 ELEMENTOS: %d\nPILHA2 ELEMENTOS: %d", qtd_elementos1(p), 79-qtd_elementos2(p));
	printf("\n\n");
	
	float f;
	f=pop(p, 1);
	printf("\nPOP PILHA 1: %f", f);
	f=pop(p, 2);
	printf("\nPOP PILHA 2: %f", f);
	printf("\n\n");
	printf("PILHA1 ELEMENTOS: %d\nPILHA2 ELEMENTOS: %d", qtd_elementos1(p), 79-qtd_elementos2(p));
	printf("\n\n");
	printf("\nPILHA 1:\n");
	imprime(p, 1);
	printf("\nPILHA 2:\n");
	imprime(p, 2);
	
	return 0;
}
