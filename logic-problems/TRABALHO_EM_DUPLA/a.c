#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cidade {
    char *nome;
    int tamanho;
} Cidade;

typedef struct fila
{
    Cidade cidade;
    struct fila *prox;
} Fila;

typedef struct cabeca {
    struct fila *ultimo;
    struct fila *primeiro;
} Cabeca;


void inserir(Cabeca *cabeca, Cidade cidade)
{
   if( cabeca->primeiro == NULL ) {
        cabeca->primeiro = (Fila*) malloc(sizeof(Fila));
        cabeca->primeiro->cidade = cidade;
        cabeca->primeiro->prox = NULL;
        cabeca->ultimo = cabeca->primeiro;
    } else {
        cabeca->ultimo->prox = (Fila*) malloc(sizeof(Fila));
        cabeca->ultimo = cabeca->ultimo->prox;
        cabeca->ultimo->cidade = cidade;
        cabeca->ultimo->prox = NULL;
    }
}

Fila* remover(Cabeca *cabeca)
{
        if(cabeca->primeiro->prox == NULL) {
            cabeca->ultimo = NULL;
        }
        Fila *aux = cabeca->primeiro;
        cabeca->primeiro = cabeca->primeiro->prox;
        return aux;
}

Cidade espia(Cabeca *cabeca)
{
    return cabeca->primeiro->cidade;
}

void criarCabeca(Cabeca *cabeca)
{
    cabeca->primeiro = NULL;
    cabeca->ultimo = NULL;
}

void imprimir(Cabeca *cabeca)
{
    Fila *aux = cabeca->primeiro;
    while(aux != NULL) {
        printf("'%s'\n", aux->cidade.nome);
        aux = aux->prox;
    }
}

int vazia(Cabeca *cabeca)
{
    return cabeca->primeiro == NULL;
}

int main() {
    Cabeca cabeca;
    criarCabeca(&cabeca);

    Cidade cidade;
    cidade.nome = malloc(sizeof(char) * 28);
    while(scanf("%s%n", cidade.nome, &cidade.tamanho) != EOF) {
        scanf("%*c");
        inserir(&cabeca, cidade);
        cidade.nome = malloc(sizeof(char) * 28);
    }

    while(!vazia(&cabeca)) {
        Cidade cidade = espia(&cabeca);
        printf("%s %d\n", cidade.nome, cidade.tamanho);
        remover(&cabeca);
    }

    printf("%p %p\n", cabeca.ultimo, cabeca.primeiro);
}