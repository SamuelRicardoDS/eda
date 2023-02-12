#include <stdio.h>

int i = 0;
char *trocar(char *word)
{

  if (word[i] == '\0')
  {
    return word;
  }
  else
  {
    trocar(word + 1);
    i++;
    printf("%c", *word);
  }
  return word;
}

int main()
{
  char palavra[1000];
  scanf("%s", palavra);

  trocar(palavra);
}