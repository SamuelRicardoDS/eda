#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// desfazer: retorna a ultima alteracao, se nao tiver retorna null
// desfazer seguido de desfazer: retorna a ultima, depois a penultima e assim por diante
// inserir: faz uma alteracao
// por ser até EOF ou seja, não ter um tamanho especifico da estrutura, utiliza-se linked list no lugar de stack

typedef struct node
{
  char frase[101];
  struct node *proximoNode;
} Node;

typedef struct cabecaDoNode
{
  Node *ultimoNode;
} CabecaDoNode;

void criarCabeca(CabecaDoNode *cabeca)
{
  cabeca->ultimoNode = NULL;
}

void inserirNoUltimoNode(CabecaDoNode *cabeca, char frase[])
{
  Node *novoNode = (Node *)malloc(sizeof(Node));
  strcpy(novoNode->frase, frase);
  novoNode->proximoNode = cabeca->ultimoNode;
  cabeca->ultimoNode = novoNode;
}

void removerOUltimoNode(CabecaDoNode *cabeca)
{
  Node *nodeParaRemover = cabeca->ultimoNode;
  cabeca->ultimoNode = cabeca->ultimoNode->proximoNode;
  free(nodeParaRemover);
}

int main()
{
  CabecaDoNode cabeca;
  criarCabeca(&cabeca);
  char instrucao[20];
  char frase[101];

  while (scanf(" %s", instrucao) != EOF) {
    if (strcmp(instrucao, "inserir") == 0) {
      scanf(" %[^\n]s", frase);
      inserirNoUltimoNode(&cabeca, frase);
    }
    else if (strcmp(instrucao, "desfazer") == 0) {
      if(cabeca.ultimoNode == NULL) {
        printf("NULL \n");
      } else {
        printf("%s \n", cabeca.ultimoNode->frase);
        removerOUltimoNode(&cabeca);
      }
    }
  }
}
