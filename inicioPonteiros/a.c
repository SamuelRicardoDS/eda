#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%i %i %i", &num1, &num2, &num3);

    int soma = num1 + num2 + num3;

    int somaRecebida;

    scanf("%i", &somaRecebida);

    if(soma == somaRecebida) {
        printf("Acertou\n");
    } else {
        printf("Errou\n");
    }

}