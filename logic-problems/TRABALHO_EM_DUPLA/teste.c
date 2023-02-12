#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* back: imprima o número do final da fila e o remova.
front: imprima o número do início da fila e o remova.
reverse: inverta a ordem de todos os elementos na fila.
push_back N: adicione o elemento N ao final da fila.
toFront N: coloque o elemento N no início da fila. */

//fila

typedef struct node {
    int valor;
    struct node *prox;
} Node;
typedef struct fila {
    Node *inicio;
    Node *fim;
} Fila;

void criarFila(Fila *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

void toFront (Fila *fila, int valor) {
    //adiciona no inicio da fila
    Node *novo = (Node *)malloc(sizeof(Node));
    novo->valor = valor;
    novo->prox = NULL;
    if (fila->fim == NULL) {
        fila->inicio = novo;
        fila->fim = novo;
    }
    novo->prox = fila->inicio;
    fila->inicio = novo;
}

void push_back (Fila *fila, int valor) {
    //adiciona no final da fila
    Node *novo = (Node *)malloc(sizeof(Node));
    novo->valor = valor;
    novo->prox = NULL;
    if (fila->fim == NULL) {
        fila->inicio = novo;
        fila->fim = novo;
    }
    fila->fim->prox = novo;
    fila->fim = novo;
}

void reverse (Fila *fila) {
    //inverte a ordem da fila
    Node *atual = fila->inicio;
    Node *anterior = NULL;
    Node *proximo = NULL;
    while (atual != NULL) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }
    fila->inicio = anterior;
}

    void front (Fila *fila) {
        //imprime o valor da frente e depois o apaga
        if(fila->inicio != fila->fim) {
            int valor = fila->inicio->valor;
            printf("front:%i\n", valor);
            fila->inicio = fila->inicio->prox;
        } else {
            puts("No job for Ada?");
        }
    }

    void back (Fila *fila) {
        //imprime o valor do final e depois o apaga
        if(fila->inicio != fila->fim) {
            int valor = fila->fim->valor;
            printf("back:%i\n", valor);
            Node *atual = fila->inicio;
            while (atual->prox != fila->fim) {
                atual = atual->prox;
            }
            atual->prox = NULL;
            fila->fim = atual;
        } else {
            puts("No job for Ada?");
        }
    }

int main() {
    Fila fila;
    criarFila(&fila);
    int quantidadeDeInstrucoes;

    scanf("%d", &quantidadeDeInstrucoes);

    for(int i = 0; i < quantidadeDeInstrucoes; i++) {
        char instrucao[20];
        int valor;
        scanf("%s %i", instrucao, &valor);
        if (strcmp(instrucao, "back") == 0) {
            back(&fila);
        } else if (strcmp(instrucao, "front") == 0) {
            front(&fila);
        } else if (strcmp(instrucao, "reverse") == 0) {
            reverse(&fila);
        } else if (strcmp(instrucao, "push_back") == 0) {
            push_back(&fila, valor);
        } else if (strcmp(instrucao, "toFront") == 0) {
            toFront(&fila, valor);
        }

    }
   

}