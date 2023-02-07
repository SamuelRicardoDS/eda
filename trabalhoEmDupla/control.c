#include <stdio.h>
#include <stdlib.h>

//desfazer: retorna a ultima alteracao, se nao tiver retorna null
//desfazer seguido de desfazer: retorna a ultima, depois a penultima e assim por diante
//inserir: faz uma alteracao
//por ser até EOF ou seja, não ter um tamanho especifico da estrutura, utiliza-se linked list no lugar de stack

typedef char* Frase;

typedef struct node {
  Frase frase;
  struct node *proximoNode;
} Node;

typedef struct cabecaDoNode {
  Node *primeiroNode;
  Node *ultimoNode;
  int quantidadeDeNodes;
} CabecaDoNode;

void criarCabeca(CabecaDoNode *cabeca) {
  cabeca->primeiroNode = NULL;
  cabeca->ultimoNode = NULL;
  cabeca->quantidadeDeNodes = 0;
}

void inserirNoUltimoNode(CabecaDoNode *cabeca, Frase frase) {
  Node *novoNode = malloc(sizeof(Node));
}

int main() {
  char instrucao[8];
  scanf("%s", instrucao);
  printf("%s", instrucao);

}