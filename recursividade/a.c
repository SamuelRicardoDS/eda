#include<stdio.h>
  int maldicao(int numero) {
    if (numero >= 101 ) {
      numero = numero - 10;
      return numero;
    } else {
      numero = numero + 11;
      numero = maldicao(numero);
      numero = maldicao(numero);
      return numero;
    }
  }
  int main() {
    int numero;
    while (scanf("%i", &numero) > 0 && numero != 0) {
      printf("f91(%i) = %i\n", numero, maldicao(numero));
    }
  }