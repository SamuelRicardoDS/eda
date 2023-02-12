#include <stdio.h>
#include <stdlib.h>

// Quando o identificador da próxima pista for -1 significa que essa é a última pista.
// como se fosse o node
typedef struct pista
{
  int identificador;
  int valor;
  int proximo;
} Pista;

int main()
{

  Pista pista;
  Pista aux;
  int numeroDePistas;

  scanf("%d", &numeroDePistas);

  Pista pistas[numeroDePistas];
  //complexidade O(n)
  for (int i = 0; i < numeroDePistas; i++)
  {
    scanf("%d %d %d", &pista.identificador, &pista.valor, &pista.proximo);
    pistas[i] = pista;
  }

  for (int i = 0; i < numeroDePistas; i++)
  {
    int proximo = pistas[i].proximo;
    // complexidade O(n²)
    for (int j = i + 1; j < numeroDePistas; j++)
    {
      if (pistas[j].identificador == proximo)
      {
        aux = pistas[i + 1];
        pistas[i + 1] = pistas[j];
        pistas[j] = aux;
      }
    }
  }

  for (int i = 0; i < numeroDePistas; i++)
  {
    printf("%d\n", pistas[i].valor);
  }
}