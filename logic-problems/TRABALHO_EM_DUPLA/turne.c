#include <stdio.h>
#include <stdlib.h>

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

Cidade espiaPrimeiro(Cabeca *cabeca)
{
    return cabeca->primeiro->cidade;
}

Cidade espiaUltimo(Cabeca *cabeca)
{
    return cabeca->ultimo->cidade;
}

int vazia(Cabeca *cabeca)
{
    return cabeca->primeiro == NULL;
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
        printf("%s\n", aux->cidade.nome);
        aux = aux->prox;
    }
}

int main()
{
    Cabeca cabecaAuxiliar;
    criarCabeca(&cabecaAuxiliar);
    Cabeca cabecaPrincipal;
    criarCabeca(&cabecaPrincipal);

    char primeiroCaracter;
    char ultimoCaracter;

    Cidade tmp;
    tmp.nome = malloc( 28 * sizeof(char) );
    while (scanf("%s%n", tmp.nome, &tmp.tamanho) != EOF) {
        scanf("%*c");
        inserir(&cabecaAuxiliar, tmp);
        tmp.nome = malloc( 28 * sizeof(char) );
    }

    inserir(&cabecaPrincipal, espiaPrimeiro(&cabecaAuxiliar));
    remover(&cabecaAuxiliar);
    while(cabecaAuxiliar.primeiro != NULL) {
        Cidade ultimoShow = espiaUltimo(&cabecaPrincipal);
        Cidade showAtual = espiaPrimeiro(&cabecaAuxiliar);
        primeiroCaracter = showAtual.nome[0];
        ultimoCaracter = ultimoShow.nome[ultimoShow.tamanho - 1];

        if(primeiroCaracter == ultimoCaracter -32) {
            inserir(&cabecaAuxiliar, showAtual);
            remover(&cabecaAuxiliar);

        }
        inserir(&cabecaPrincipal, espiaPrimeiro(&cabecaAuxiliar));
        remover(&cabecaAuxiliar);
    }
    imprimir(&cabecaPrincipal);
}