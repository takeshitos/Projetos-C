#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "Exercicio1.h"
#define MAX 80

struct pilha{
	int n1;
	int n2;
	float vet[MAX];
};

Pilha* cria (void)
{
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->n1 = 0;/* inicializa com zero elementos */
	p->n2 = 79;
	return p;
}

void push (Pilha* p, float v, int i)
{
	if (p->n1 == 51) { /* capacidade esgotada */
		printf("Capacidade da pilha 1 estourou.\n");
		exit(1); /* aborta programa */
	}
	if (p->n2 == 29) { /* capacidade esgotada */
		printf("Capacidade da pilha 2 estourou.\n");
		exit(1); /* aborta programa */
	}
	if(p->n1 == p->n2+1 || p->n2 == p->n1-1){
		printf("Capacidade da pilha estourou.\n");
		exit(1); /* aborta programa */
	}
	/* insere elemento na próxima posição livre */
	switch(i){
		case 1:
			p->vet[p->n1] = v;
			p->n1++;
			break;
		case 2:
			p->vet[p->n2] = v;
			p->n2--;
			break;
		default:
			printf("\nLISTA NAO EXISTE <1 ou 2>");
			break;	
	}
}

float pop (Pilha* p, int i)
{
	float v;
	if (vazia(p)) {
		printf("Pilha vazia.\n");
		exit(1); /* aborta programa */
	}
	/* retira elemento do topo */
	switch(i){
		case 1:
			v = p->vet[p->n1-1];
			p->n1--;
			break;
		case 2:
			v = p->vet[p->n2+1];
			p->n2++;
			break;
		default:
			printf("\nLISTA NAO EXISTE <1 ou 2>");
			break;	
	}
	return v;
}

void imprime (Pilha* p, int a)
{
	int i;
	
	switch(a){
		case 1:
			for (i=p->n1-1; i>=0; i--)
				printf("%f\n",p->vet[i]);
			break;
		case 2:
			for (i=p->n2+1; i<=79; i++)
				printf("%f\n",p->vet[i]);
			break;
		default:
			printf("\nLISTA NAO EXISTE <1 ou 2>");
			break;	
	}
}

int vazia (Pilha* p)
{
	return (p->n1 == 0 && p->n2 == 79);
}

void libera (Pilha* p)
{
	free(p);
}

int qtd_elementos1(Pilha *p){
	return p->n1;
}

int qtd_elementos2(Pilha *p){
	return p->n2;
}
