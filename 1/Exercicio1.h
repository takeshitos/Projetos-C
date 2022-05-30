//struct pilha
typedef struct pilha Pilha;
//cria/inicializa uma pilha
Pilha* cria (void);
//Adiciona um elemento no topo da pilha
void push (Pilha* p, float v, int i);
//Retira o elemento do topo da pilha
float pop (Pilha* p, int i);
//Imprime uma pilha na tela
void imprime (Pilha* p, int a);
//Verifica se um apilha está vazia
int vazia (Pilha* p);
//libera/free uma pilha
void libera (Pilha* p);
//retorna a quantidade da pilha1
int qtd_elementos1(Pilha *p);
//retorna a quantidade da pilha2
int qtd_elementos2(Pilha *p);
