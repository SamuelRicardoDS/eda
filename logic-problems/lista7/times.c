#include <stdio.h>

int main()
{
  char times[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};

  int t = 0;
  int teste = 0;
  int f = 8;

  for (int i = 0; i < 4; i++)
  {
    for (int i = 0; i < f; i++)
    {
      int t1 = 0;
      int t2 = 0;

      scanf("%i %i", &t1, &t2);

      if (t1 > t2)
      {
        times[teste] = times[t];
        teste++;
        t += 2;
      }
      else
      {
        times[teste] = times[t + 1];
        teste++;
        t += 2;
      }
      if (teste == f)
      {
        teste = 0;
        t = 0;
      }
    }
    f = f / 2;
  }
  printf("%c\n", times[teste]);
}