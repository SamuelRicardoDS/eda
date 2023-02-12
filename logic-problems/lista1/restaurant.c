#include <stdio.h>

int main()
{
  int dia;
  int quanti = 0;
  int code;
  int rate;

  while (scanf("%i", &quanti) > 0)
  {
    int bigRate = -1;
    int smallCode = 0;
    while (quanti--)
    {
      scanf("%i %i", &code, &rate);
      if (rate > bigRate)
      {
        bigRate = rate;
        smallCode = code;
      }
      else if (rate == bigRate && code < smallCode)
      {
        smallCode = code;
      }
    }
    dia++;
    printf("Dia %i\n%i\n\n", dia, smallCode);
  }
}
