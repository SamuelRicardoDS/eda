#include <stdio.h>

int main()
{
  unsigned int mensagem;

  while (scanf("%x", &mensagem) > 0)
  {
    int i = 0;
    char *mensagemT;
    mensagemT = (char *)&mensagem;

    while (mensagemT[i] != 0)
    {
      printf("%c\n", mensagemT[i]);
      i++;
    }
  }
}