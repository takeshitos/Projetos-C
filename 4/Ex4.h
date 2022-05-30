//Struct NO da fila
typedef struct no No;
//Struct fila
typedef struct fila Fila;
//cria/inicializa uma fila
Fila *cria();
//função auxiliar: insere no fim FILA
No* ins_fim(No *fim, char c);
//função auxiliar: retira do início FILA
No* ret_ini (No* ini);
//Insere um elemento no fim da fila
void insere(Fila *f, char c);
//verifica se uma fila está vazia
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
//verifica se uma pilha está vazia
int vaziaPilha(Pilha *p);
//função auxiliar insere PILHA
NoPilha *inserePilha(NoPilha *l, char v);
//Adiciona um elemento no topo da pilha
void push(Pilha *p, char v);
//função auxiliar remove
NoPilha *retiraPilha(NoPilha *l);
//retira o elemento do topo da pilha
float pop(Pilha *p);
//libera/free uma pilha
void liberaPilha(Pilha *p);
//verifica se um caractere é um dígito
bool ehDigito(char v);
//Ordena uma fila na seuqencia caracter-digitoInvertido;
Fila *sequenciador(Fila *f);





