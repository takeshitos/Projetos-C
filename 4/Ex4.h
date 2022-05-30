//Struct NO da fila
typedef struct no No;
//Struct fila
typedef struct fila Fila;
//cria/inicializa uma fila
Fila *cria();
//fun��o auxiliar: insere no fim FILA
No* ins_fim(No *fim, char c);
//fun��o auxiliar: retira do in�cio FILA
No* ret_ini (No* ini);
//Insere um elemento no fim da fila
void insere(Fila *f, char c);
//verifica se uma fila est� vazia
int vazia(Fila* f);
//Retira o primeiro elemento da fila
char retira(Fila *f);
//Libera/free uma fila
void libera(Fila *f);
//Imprime uma fila 
void imprime(Fila *f);
//////////////////////////////
//Struct NO PILHA
typedef struct noPilha NoPilha;
//Struct PILHA
typedef struct pilha Pilha;
//verifica se uma pilha est� vazia
int vaziaPilha(Pilha *p);
//fun��o auxiliar insere PILHA
NoPilha *inserePilha(NoPilha *l, char v);
//Adiciona um elemento no topo da pilha
void push(Pilha *p, char v);
//fun��o auxiliar remove
NoPilha *retiraPilha(NoPilha *l);
//retira o elemento do topo da pilha
float pop(Pilha *p);
//libera/free uma pilha
void liberaPilha(Pilha *p);
//verifica se um caractere � um d�gito
bool ehDigito(char v);
//Ordena uma fila na seuqencia caracter-digitoInvertido;
Fila *sequenciador(Fila *f);





