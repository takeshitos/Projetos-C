#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<stdbool.h>
#define N 50
#include "Ex4.h"

struct no{
	char c;
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
No* ins_fim(No *fim, char c){
	No *p = (No*)malloc(sizeof(No));
	p->c = c;
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

void insere(Fila *f, char c){
	f->fim = ins_fim(f->fim, c);
	if(f->ini == NULL){
		f->ini = f->fim;
	}
}

int vazia(Fila* f)
{
	return (f->ini==NULL);
}

char retira(Fila *f){
	if(vazia(f)){
		printf("\nFILA VAZIA!");
		exit(1);
	}
	char c = f->ini->c;
	f->ini = ret_ini(f->ini);
	if(f->ini == NULL){
		f->fim = NULL;
	}
	return c;
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
		printf("%c ", q->c);
}
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
struct noPilha{
	char info;
	struct noPilha *prox;
};

struct pilha{
	NoPilha *prim;
};

Pilha *criaPilha(){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

int vaziaPilha(Pilha *p){
	return (p->prim==NULL);
}

//função auxiliar insere
NoPilha *inserePilha(NoPilha *l, char v){
	NoPilha *p = (NoPilha*)malloc(sizeof(NoPilha));
	p->info = v;
	p->prox = l;
	return p;
}

void push(Pilha *p, char v){
	p->prim = inserePilha(p->prim, v);
}

//função auxiliar remove
NoPilha *retiraPilha(NoPilha *l){
	NoPilha *p = l->prox;
	free(l);
	return p;
}

float pop(Pilha *p){
	float v;
	if(vaziaPilha(p)){
		printf("\nPILHA VAZIA!\n");
		exit(1);
	}
	v = p->prim->info;
	p->prim = retiraPilha(p->prim);
	return v;
}

void liberaPilha(Pilha *p){
	NoPilha* q = p->prim;
	while(q!=NULL){
		NoPilha *t = q->prox;
		free(q);
		q=t;
	}
	free(p);
}

bool ehDigito(char v){
	if (!(v >= 'a' && v <= 'z')){
		return true;
    }
    return false;
}

Fila *sequenciador(Fila *f){
	No *q;
	Fila *fi;
	Pilha *p;
	p=criaPilha();
	fi=cria();
	for (q=f->ini; q!=NULL; q=q->prox){
		if(ehDigito(q->c)){
			push(p, q->c);	
		}else{
			insere(fi, q->c);
		}
	}
	NoPilha *q2;
	for(q2=p->prim; q2!=NULL; q2=q2->prox){
		insere(fi, q2->info);
	}
	return fi;
}
