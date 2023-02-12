#include <stdio.h>

int main()
{
  int vetor[1001];
  int entradas;
  int lindo = 0;
  int troca;

  while (scanf(" %i", &entradas) != EOF)
  {
    vetor[lindo] = entradas;
    lindo++;
  }

  for (int o = 0; o < lindo; o++)
  {
    for (int i = 0; i < lindo - 1; i++)
    {
      if (vetor[i] > vetor[i + 1])
      {
        troca = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = troca;
      }
    }
  }
  for (int i = 0; i < lindo; i++)
  {
    printf("%i ", vetor[i]);
  }
}
