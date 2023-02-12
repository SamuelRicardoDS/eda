#include <stdio.h>

int main()
{
  int d;

  int l;
  int a;
  int p;

  scanf("%i", &d);

  scanf("%i %i %i", &l, &a, &p);

  if (d <= l && d <= a && d <= p)
  {
    printf("S\n");
  }
  else
    (printf("N\n"));
}