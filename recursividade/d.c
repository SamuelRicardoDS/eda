#include <stdio.h>

int recursivesSum(long int n) {
  int sumofall = 0;
  if (n == 0 ) {
    n = 0;
  }
    if(n > 0) {
      sumofall += n % 10;
      n = n / 10;
      sumofall += recursivesSum(n);
    } 
    return sumofall;
}

int main() {
  long int n;
  scanf("%li", &n);
  long int soma = recursivesSum(n);
  printf("%li\n", soma);
}