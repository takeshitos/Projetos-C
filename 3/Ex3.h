//Struct do NO
typedef struct no No;
//Struct da Fila
typedef struct fila Fila;
//Cria/inicializa uma fila
Fila *cria();
//fun��o auxiliar: insere no fim
No* ins_fim(No *fim, No *ini,int v);
//fun��o auxiliar: retira do in�cio
No* ret_ini (No* ini, No* fim);
//Insere um elemento no final da fila
void insere(Fila *f, int v);
//Verifica se uma fila est� vazia
int vazia(Fila* f);
//retira o primeiro elemento da fila
int retira(Fila *f);
//retorna a quantidade de elementos da fila
int quant_elementos(Fila *f);
//imprime uma fila na tela
void imprime(Fila *f);
