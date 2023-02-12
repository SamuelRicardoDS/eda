#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;

  int total;
  scanf("%i %i %i", &a, &b, &c);

  int soma = a + b + c;

  scanf("%i", &total);
  if (soma == total)
  {
    printf("Acertou\n");
  }
  else
    printf("Errou\n");
}