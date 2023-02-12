#include <stdio.h>
#include <string.h>

int main(void)
{
  int linhas;
  scanf("%i", &linhas);
  char texto[linhas][1001];
  int A, B;

  for (int i = 0; i < linhas; i++)
  {
    scanf(" %10000[^\n]", texto[i]);
  }

  scanf("%i %i", &A, &B);

  char action;
  while (scanf(" %c", &action) > 0)
  {
    if (action == 'j')
    {
      if (A < linhas)
      {
        A++;
      }
    }
    else if (action == 'k')
    {
      if (A > 1)
      {
        A--;
      }
    }
    int tamanhoL = strlen(texto[A - 1]);

    if (tamanhoL < B)
    {
      printf("%i %i %c\n", A, tamanhoL, texto[A - 1][tamanhoL - 1]);
    }
    else
      printf("%i %i %c\n", A, B, texto[A - 1][B - 1]);
  }
  return 0;
}