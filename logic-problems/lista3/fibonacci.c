#include <stdio.h>

long long int fibojonson[81] = {0};

long long int fibonacci(long long int n)
{
  if (n <= 2)
  {
    fibojonson[n] = 1;
  }

  if (fibojonson[n] != 0)
  {
    return fibojonson[n];
  }
  fibojonson[n] = fibonacci(n - 2) + fibonacci(n - 1);
  return fibojonson[n];
}
