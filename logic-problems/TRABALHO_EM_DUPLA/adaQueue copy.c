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
} Fila;

void criarFila(Fila *fila, int tamanho) {
    fila->vetor = (int *)malloc(tamanho * sizeof(int) * 2);
    if (fila->vetor == NULL) {
        return;
    }
    fila->inicio = tamanho;
    fila->fim = tamanho;
}

void toFront (Fila *fila, int valor) {
    //move tudo para a direita e adiciona no inicio da fila
    
    fila->inicio--;
    fila->vetor[fila->inicio] = valor;
}

void push_back (Fila *fila, int valor) {
    fila->vetor[fila->fim] =valor;
    fila->fim++;
}
void printarFila(Fila *fila) {
    if(fila->fim >= fila->inicio) {
        return;
    }
    for(int i = fila->inicio; i < fila->fim; i++) {
        printf("%i ", fila->vetor[i]);
    }
    puts("");
}

void reverse (Fila *fila) {

    int meioDaFila = (fila->fim - fila->inicio) / 2 + fila->inicio;
    for(int i = fila->inicio, j = 1; i < meioDaFila; i++, j++) {
        int aux = fila->vetor[i];
        fila->vetor[i] = fila->vetor[fila->fim - j];
        fila->vetor[fila->fim - j] = aux;

    }
}


    void front (Fila *fila) {
        //imprime o valor da frente e depois o apaga
        if (fila->inicio != fila->fim) {
            int valor = fila->vetor[fila->inicio];
            printf("%i\n", valor);
            fila->inicio++;
        } else {
            puts("No job for Ada?");
        }
    }

    void back (Fila *fila) {
        //imprime o valor do final e depois o apaga
    if(fila->inicio != fila->fim) {
        int valor = fila->vetor[fila->fim - 1];
        printf("%i", valor);
        fila->fim--;
    } else {
        puts("No job for Ada?");
    }
    }

int main() {
    Fila fila;
    int quantidadeDeInstrucoes;

    scanf("%d", &quantidadeDeInstrucoes);
    criarFila(&fila, quantidadeDeInstrucoes);

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
  /*   for(int i = 0; i < fila.tamanho; i++) {
        printf("fila completa%i ", fila.vetor[i]);
    } */

}