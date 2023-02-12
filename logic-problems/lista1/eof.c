#include <stdio.h>

int main()
{
  int i;

  int count = 0;
  while (scanf("%i", &i) != -1)
  {
    count++;
  }

  printf("%i\n", count);
}