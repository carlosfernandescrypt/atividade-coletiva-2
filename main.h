#ifndef MAIN_H
#define MAIN_H

#define MAX_DISCOS 30

typedef struct {
    int discos[MAX_DISCOS];
    int topo;
} Pilha;

// Função para inicializar uma pilha
void inicializarPilha(Pilha *p);

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha *p);

// Função para verificar se a pilha está cheia
int pilhaCheia(Pilha *p);

// Função para empilhar um disco
void empilhar(Pilha *p, int disco);

// Função para desempilhar um disco
int desempilhar(Pilha *p);

// Função para obter o disco no topo da pilha sem desempilhar
int topo(Pilha *p);

// Função para imprimir as hastes e os discos
void imprimirHastes(Pilha hastes[3], int numDiscos);

// Função para verificar se o movimento é válido
int movimentoValido(Pilha hastes[3], int origem, int destino);

// Função para realizar o movimento
void realizarMovimento(Pilha hastes[3], int origem, int destino);

// Função para adicionar um passo à lista
void adicionarPasso(char passo[]);

// Função para resolver a Torre de Hanói
void resolverTorreHanoi(int numDiscos, int origem, int destino, int auxiliar);

// Função para converter a entrada da haste de caractere para índice
int hasteParaIndice(char haste);

// Função para verificar se todos os discos estão em uma das hastes de destino
int verificarFimDeJogo(Pilha hastes[3], int numDiscos);

// Função para reiniciar o jogo
void reiniciarJogo(Pilha hastes[3], int numDiscos);

#endif
