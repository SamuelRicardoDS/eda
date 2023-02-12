#include <stdio.h>

int main()
{
  int l;
  int i;
  int valores;
  int total;
  int total2 = 0;

  scanf("%i", &l);

  for (i = 0; i < l; i++)
  {
    scanf("%i", &valores);
    total2 += valores;
  }
  scanf("%i", &total);
  if (total2 == total)
  {
    printf("Acertou\n");
  }
  else
    printf("Errou\n");
}