#include <stdio.h>

int sumOfAll(int n) {
    int degree = 0;
    int sumofall = 0;
    while (n > 0) {
      sumofall += n % 10;
      n = n / 10;
      degree++;
    } 
    printf(" grau: %i\n", degree);
    return sumofall;
}

int main() {
  int n;
  scanf("%i", &n);
  int soma = sumOfAll(n);
  printf("%i", soma);
}