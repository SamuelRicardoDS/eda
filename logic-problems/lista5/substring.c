#include <stdio.h>

int minimamente()
{
}

int main()
{
  long long int entradas;
  long long int tamanhoV = 0;
  long long int vetor[tamanhoV];

  while (scanf("%lli", &entradas) != EOF)
  {
    if (entradas == 0)
      break;

    tamanhoV += 1;
    vetor[tamanhoV] = entradas;
  }

  long long valor;
  scanf("%lli", &valor);
}