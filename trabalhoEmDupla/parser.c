#include <stdio.h>
#include <stdlib.h>

//pilha
typedef char Item;
typedef struct pilha {
  Item *item;
  int topo;
} Pilha;

int inicializaPilha(Pilha *p, int tamanho) {
    p->item = (Item *)malloc(sizeof(char) * 100 * tamanho);

    if(p->item == NULL){
      return 0;
    }

    p->topo = 0;
    return 1;

}

void empilhar(Pilha *p, Item item){
  p->item[p->topo] = item;
  p->topo++;
}

void desempilhar(Pilha *p){
  p->topo--;
}

int main() {
Pilha p;
int QuantityLines = 0;

scanf("%i", &QuantityLines);

inicializaPilha(&p, QuantityLines);

for (int i = 0; i < QuantityLines; i++)
{
  char temp;
  while(scanf(" %c", &temp) != '\0')
  {
    if (temp == '/')
    {
      if (p.item[p.topo - 1] == '/')
      {
        desempilhar(&p);
      }
      empilhar(&p, temp);
      
    }
    else if (temp == '*')
    {
      if (p.item[p.topo - 1] == '*')
      {
        desempilhar(&p);
      }
      empilhar(&p, temp);
    }
    else if (temp == '_')
    {
      if (p.item[p.topo - 1] == '_')
      {
        desempilhar(&p);
      }
      empilhar(&p, temp);
    }
  }
}
if (p.topo == 0)
{
  printf("C");
}else {
  printf("E");
}

};