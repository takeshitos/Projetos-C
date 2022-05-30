//Struct NO
typedef struct no No;
//Struct Fila
typedef struct fila Fila;
//Cria/inicializa uma fila
Fila *cria();
//função auxiliar: insere no fim
No* ins_fim(No *fim, int v, char c[]);
//função auxiliar: retira do início
No* ret_ini (No* ini);
//Insere um elemento no final da fila
void insere(Fila *f, int v, char c[]);
//verifica se uma fila está vazia
int vazia(Fila* f);
//retira o primeiro elemento da fila
char *retira(Fila *f, int *v);
//libera/free uma fila
void libera(Fila *f);
//imprime uma fila na tela
void imprime(Fila *f);
//retirna quantidade de elementos da fila
int quant_elementos(Fila *f);
//imprime os valores do primeiro elemento da lista
void listar_primeiro(Fila *f);


