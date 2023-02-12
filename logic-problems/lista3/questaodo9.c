#include <stdio.h>
#include <string.h>

int somaTods(int n)
{
  int SomaTodos = 0;

  for (n; n > 0; n = n / 10)
  {
    SomaTodos += n % 10;
  }

  return SomaTodos;
}
void calcularNove(char *primeiro, int sum, int decrescer, int decrescerSoma)
{
  if (sum > 9)
  {
    decrescerSoma = somaTods(sum);
    calcularNove(primeiro, decrescerSoma, decrescer + 1, sum);
  }
  else if (sum == 9)
  {
    printf("%s is a multiple of 9 and has 9-degree %i.\n", primeiro, decrescer);
  }
  else if (sum != 9)
  {
    printf("%s is not a multiple of 9.\n", primeiro);
  }
}

int main()
{
  int decrescer = 1;
  int somaDecrescer = 0;
  char ent[1999];
  char primeiro[1999];

  while (scanf("%s", ent) > 0 && ent[0] != '0')
  {
    int sum = 0;
    for (int i = 0; ent[i] != 0; i++)
    {
      sum += ent[i] - 48;
    }
    strcpy(primeiro, ent);
    calcularNove(primeiro, sum, decrescer, somaDecrescer);
  }
}