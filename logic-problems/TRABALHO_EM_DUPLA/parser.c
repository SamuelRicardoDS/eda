#include <stdio.h>
#include <stdlib.h>

// pilha
typedef char Item;
typedef struct pilha
{
  Item *item;
  int topo;
} Pilha;

int inicializaPilha(Pilha *p, int tamanho)
{
  p->item = (Item *)malloc(sizeof(char) * 100 * tamanho);

  if (p->item == NULL)
  {
    return 0;
  }

  p->topo = 0;
  return 1;
}

void empilhar(Pilha *p, Item item)
{
  p->item[p->topo] = item;
  p->topo++;
}

void desempilhar(Pilha *p)
{
  p->topo--;
}

int main()
{
  Pilha p;

  int QuantityLines;
  scanf("%i", &QuantityLines);

  inicializaPilha(&p, QuantityLines);

  // ancora para poder acessar sempre um anterior ao topo da pilha
  empilhar(&p, ' ');
  for (int i = 0; i <= QuantityLines; i++)
  {
    char temp;
    while (scanf("%c", &temp) == 1 && temp != '\n')
    {
      if (temp == '/' && p.item[p.topo - 1] == '/')
      {
        desempilhar(&p);
      }
      else if (temp == '*' && p.item[p.topo - 1] == '*')
      {
        desempilhar(&p);
      }
      else if (temp == '_' && p.item[p.topo - 1] == '_')
      {
        desempilhar(&p);
      }
      else if (temp == '_' || temp == '*' || temp == '/')
      {
        empilhar(&p, temp);
      }
    }
  }
  if (p.topo == 1)
  {
    puts("C");
  }
  else
  {
    puts("E");
  }
};