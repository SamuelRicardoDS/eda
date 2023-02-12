#include <stdio.h>

int main(void)
{
  int n = 0;
  int j = 0;
  int z = 0;
  int teste = 1;
  int diferenca = 0;

  scanf("%i", &n);

  while (n != 0)
  {
    printf("Teste %d\n", teste);

    j = 0;
    z = 0;
    diferenca = 0;

    while (n--)
    {
      scanf("%d", &j);
      scanf("%d", &z);

      int t = j - z;

      diferenca += t;

      printf("%d\n", diferenca);
    }

    teste++;
    printf("\n");
    scanf("%d", &n);
  }

  return 0;
}