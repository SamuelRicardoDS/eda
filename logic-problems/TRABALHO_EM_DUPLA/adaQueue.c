#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* back: imprima o número do final da fila e o remova.
front: imprima o número do início da fila e o remova.
reverse: inverta a ordem de todos os elementos na fila.
push_back N: adicione o elemento N ao final da fila.
toFront N: coloque o elemento N no início da fila. */

//fila
typedef struct fila {
    int *vetor;
    int inicio;
    int fim;
    int tamanho;
    int eVazia;
} Fila;

void criarFila(Fila *fila, int tamanho) {
    fila->vetor = (int *)malloc(tamanho * 2 * sizeof(int));
    if (fila->vetor == NULL) {
        return;
    }
    fila->inicio = tamanho;
    fila->fim = tamanho;
    fila->tamanho = 2 * tamanho;
    fila->eVazia = 1;
}

void toFront (Fila *fila, int valor) {
    //adiciona no primeiro elemento da fila circular
    if(fila->inicio == 0) {
        fila->inicio = fila->tamanho -1;
    } else {
        fila->inicio--;
    }
    fila->vetor[fila->inicio] = valor;
    fila->eVazia = 0;
}


void push_back (Fila *fila, int valor) {
    //adiciona no ultimo elemento da fila circular
    fila->vetor[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % fila->tamanho;
    fila->eVazia = 0;
}

    void front (Fila *fila) {
        //imprime o valor da frente e depois o apaga
        if(fila->eVazia) {
            puts("No job for Ada?");
            return;
        }
            int valor = fila->vetor[fila->inicio];
            printf("%i\n", valor);
            fila->inicio = (fila->inicio + 1) % fila->tamanho;
            if(fila->inicio == fila->fim) {
                fila->eVazia = 1;
            }
    }

    void back (Fila *fila) {
        //imprime o valor do final e depois o apaga
    if(fila->eVazia) {
        puts("No job for Ada?");
        return;
    } else {
        if(fila->fim == 0) {
            fila->fim = fila->tamanho - 1;
        } else {
            fila->fim--;
        }
        int valor = fila->vetor[fila->fim];
        printf("%i\n", valor);
        if(fila->fim == fila->inicio) {
            fila->eVazia = 1;
        }
    }
    }

int main() {
    Fila fila;
    int quantidadeDeInstrucoes;

    scanf("%d", &quantidadeDeInstrucoes);
    criarFila(&fila, quantidadeDeInstrucoes);

    char eReverso = 0;

    for(int i = 0; i < quantidadeDeInstrucoes; i++) {
        char instrucao[20];
        int valor;
        scanf("%s", instrucao);
        if (strcmp(instrucao, "back") == 0) {
            if(eReverso)
                front(&fila);
            else
                back(&fila);
        } else if (strcmp(instrucao, "front") == 0) {
            if(eReverso)
                back(&fila);
            else
                front(&fila);
        } else if (strcmp(instrucao, "reverse") == 0) {
            eReverso = !eReverso;
        } else if (strcmp(instrucao, "push_back") == 0) {
            scanf("%d", &valor);
            if(eReverso)
                toFront(&fila, valor);
            else
                push_back(&fila, valor);
        } else if (strcmp(instrucao, "toFront") == 0) {
            scanf("%d", &valor);
            if(eReverso)
                push_back(&fila, valor);
            else
                toFront(&fila, valor);
        }

    }

}