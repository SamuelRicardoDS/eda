#include <stdio.h>

void minimamente(long long int *vetor, long long int max, long long int soma)
{
  if (*vetor + soma > max)
  {
    minimamente(vetor + 1, max, 0);
    printf("%lli\n", *vetor);
  }
  else if (*vetor == 0)
  {
    return;
  }
  else
    minimamente(vetor + 1, max, soma + *vetor);
}

int main()
{
  long long int entradas;
  long long int vetor[1000];
  int i = 0;

  while (scanf("%lli", &entradas) != EOF)
  {
    if (entradas == 0)
      break;

    vetor[i] = entradas;
    i++;
  }

  long long max;
  scanf("%lli", &max);
  minimamente(vetor, max, 0);
}