#include <stdio.h>

char *switchX(char *p)
{
  int i = 0;
  if (p[i] == '\0')
  {
    return p;
  }
  else
  {
    if (p[i] == 'x')
    {
      p[i] = 'y';
    }
    i++;
    switchX(p + 1);
  }
  return p;
}

int main()
{
  char word[299];
  scanf("%s", word);
  char *wordY = switchX(word);
  printf("%s\n", wordY);
}