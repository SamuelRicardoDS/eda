#include <stdio.h>
int main()
{
  int vetor[1001];
  int entradas, lindo = 0, clone = 0;
  while (scanf("%i", &entradas) != EOF)
  {
    vetor[lindo] = entradas;
    for ()
    {
      if (vetor[i] > vetor[i + 1])
      {
        clone = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = clone;
      }
    }
    lindo++;
  }
  for (int i = 0; i < lindo; i++)
  {
    printf("%i", vetor[i]);
  }
}