#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct pilha
{
  Item *item;
  int topo;
} Pilha;

int inicializaPilha(Pilha *p, int tamanho)
{
  p->item = (Item *)malloc(sizeof(char) * tamanho);

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

int main () {
  int numeroDeCarros;
  scanf("%d", &numeroDeCarros);

  int carro;
  while(numeroDeCarros != 0) {

    Pilha ruaSecundaria;
    inicializaPilha(&ruaSecundaria, 1000);

    //verificador booleano 
    int estaEmpilhado = 0;

    int carroQuePodeAtravessar = 1;
    for(int i = 0; i < numeroDeCarros; i++) {
      scanf("%d", &carro);
      while(ruaSecundaria.topo != 0 && ruaSecundaria.item[ruaSecundaria.topo - 1] == carroQuePodeAtravessar) {
       desempilhar(&ruaSecundaria);
       carroQuePodeAtravessar++;
      }
      if(carro == carroQuePodeAtravessar) {
        carroQuePodeAtravessar++;
      } else {
        
        if(ruaSecundaria.item[ruaSecundaria.topo - 1] > carro || ruaSecundaria.topo == 0) {
          empilhar(&ruaSecundaria, carro);
        } else if(ruaSecundaria.item[ruaSecundaria.topo - 1] < carro) {
          estaEmpilhado = 1;
        }
      }
    }
    scanf("%d", &numeroDeCarros);
    if(estaEmpilhado == 0) {
      puts("yes");
    } else {
      puts("no");
    }
  }
}