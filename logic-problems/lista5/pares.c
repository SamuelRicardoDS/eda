#include <stdio.h>

int c = 0;

int par(char *palavra)
{
  int i = 0;

  if (palavra[i] == '\0')
  {
    return c;
  }
  else
  {
    if (palavra[i] == palavra[i + 2])
    {
      c++;
    }
    i++;
    par(palavra + 1);
  }

  return c;
}

int main()
{
  char palavra[300];
  scanf("%s", palavra);
  int contador = par(palavra);

  printf("%i\n", contador);
}