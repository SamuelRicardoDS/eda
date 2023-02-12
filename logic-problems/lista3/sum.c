#include <stdio.h>

long int Sum(long int numero)
{
  long int soma = 0;

  if (numero == 0)
  {
    return 0;
  }
  soma += numero % 10;
  numero = numero / 10;
  soma += Sum(numero);

  return soma;
}

int main()
{
  long int n;

  scanf("%li", &n);
  n = Sum(n);

  printf("%li\n", n);
}