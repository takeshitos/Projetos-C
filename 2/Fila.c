#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#define N 50
#include "Fila.h"


struct no{
	int n;
	char nome[N];
	struct no *prox;
};

struct fila{
	No *ini;
	No *fim;
};

Fila *cria(){
	Fila *f=(Fila*)malloc(sizeof(Fila));
	f->ini = f->fim = NULL;
	return f;
}

/* função auxiliar: insere no fim */
No* ins_fim(No *fim, int v, char c[]){
	No *p = (No*)malloc(sizeof(No));
	p->n = v;
	strcpy(p->nome, c);
	p->prox = NULL;
	if (fim != NULL) /* verifica se lista não estava vazia */
	
		fim->prox = p;
	return p;
}
/* função auxiliar: retira do início */
No* ret_ini (No* ini){
	No* p = ini->prox;
	free(ini);
	return p;
}

void insere(Fila *f, int v, char c[]){
	f->fim = ins_fim(f->fim, v, c);
	if(f->ini == NULL){
		f->ini = f->fim;
	}
}

int vazia(Fila* f)
{
	return (f->ini==NULL);
}

char *retira(Fila *f, int *v){
	char *x = (char*)malloc(sizeof(char) * N);
	if(vazia(f)){
		printf("\nFILA VAZIA!");
		exit(1);
	}
	*v = f->ini->n;
	strcpy(x, f->ini->nome);
	f->ini = ret_ini(f->ini);
	if(f->ini == NULL){
		f->fim = NULL;
	}
	return x;
}

void libera(Fila *f){
	No* q = f->ini;
	while (q!=NULL) {
		No* t = q->prox;
		free(q);
		q = t;
	}
	free(f);
}

void imprime(Fila *f){
	No* q;
	if(vazia(f)){
		printf("\nFILA VAZIA!");
		exit(1);
	}
	for (q=f->ini; q!=NULL; q=q->prox)
		printf("%d: %s\n", q->n ,q->nome);
}

int quant_elementos(Fila *f){
	No *q;
	int cont=0;
	if(vazia(f)){
		return 0;
	}
	for(q=f->ini; q!=NULL; q=q->prox){
		cont++;
	}
	return cont;
	
}

void listar_primeiro(Fila *f){
	if(vazia(f)){
		printf("\nFILA VAZIA!");
		exit(1);
	}
	printf("\nPRIMEIRO DA FILA:\n");
	printf("\nNUM IDENT: %d", f->ini->n);
	printf("\nNOME: %s", f->ini->nome);
}
