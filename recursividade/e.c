#include <stdio.h>

long int fibonacci(long int n[80]) {
  for(int i = 2; i < 80; i++) {
    n[i] = n[i - 1] + n[i - 2];
  }
  return n[70];
}

int main() {
  long int n[80];
  scanf("%li", n);
  long int a = fibonacci(n);
  printf("%li\n", a);
}
