#include <stdio.h>

int main() {
    int numPessoas;
    int num;
    int soma = 0;
    int somaRecebida;

    scanf("%i", &numPessoas);

    for(int i=0; i<numPessoas; i++) {
        scanf("%i", &num);
        soma += num;
    }
    scanf("%i", &somaRecebida);

    if(soma == somaRecebida) {
        printf("Acertou\n");
    } else {
        printf("Errou\n");
    }

}