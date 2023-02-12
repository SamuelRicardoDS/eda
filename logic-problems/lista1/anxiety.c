#include <stdio.h>
#include <string.h>

int main()
{
  char user[4];
  int l = 0;
  int yes = 0;
  int count = 0;

  while (scanf("%s", user) > 0)
  {
    if (strcmp(user, "sim") == 0)
    {
      yes++;
    }
    l++;
    if (l == 10)
    {
      if (yes >= 2)
      {
        count++;
      }
      yes = 0;
      l = 0;
    }
  }
  printf("%i\n", count);
}