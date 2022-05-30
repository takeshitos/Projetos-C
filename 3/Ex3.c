#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Ex3.h"

struct no{
	int n;
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
No* ins_fim(No *fim, No *ini,int v){
	No *p = (No*)malloc(sizeof(No));
	if(fim==NULL){
		p->n = v;
		p->prox = p;
		return p;
	}
	p->n = v;
	p->prox = ini;
	fim->prox = p;
	return p;
}
/* função auxiliar: retira do início */
No* ret_ini (No* ini, No* fim){
	if(ini == fim){
		free(ini);
		return NULL;
	}
	No* p = ini->prox;
	free(ini);
	fim->prox = p;
	return p;
}

void insere(Fila *f, int v){
	f->fim = ins_fim(f->fim, f->ini, v);
	if(f->ini == NULL){
		f->ini = f->fim;
	}
}

int vazia(Fila* f)
{
	return (f->ini==NULL);
}

int retira(Fila *f){
	if(vazia(f)){
		printf("\nFILA VAZIA!");
		exit(1);
	}
	int v = f->ini->n;
	f->ini = ret_ini(f->ini, f->fim);
	if(f->ini == NULL){
		f->fim = NULL;
	}
	return v;
}

int quant_elementos(Fila *f){
	No *q;
	int cont=0;
	if(vazia(f)){
		return 0;
	}
	q=f->ini;
	do{
		cont++;
		q=q->prox;
	}while(q!=f->ini);
	return cont;
	
}

void imprime(Fila *f){
	No* q = f->ini;
	if(vazia(f)){
		printf("\nFILA VAZIA!");
		exit(1);
	}
	do{
		printf("[%d] -> ", q->n);;
		q=q->prox;
	}while(q!=f->ini);
}
