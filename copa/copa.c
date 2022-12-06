#include <stdio.h>

int main()
{
  char vetorTimes[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
  int posicao = 0;
  int timeJogando  = 0;
  int t1 = 0;
  int t2 = 0;

  for (int i = 0; i < 8; i++) {
    int t1 = 0;
    int t2 = 0;

    scanf("%i %i", &t1, &t2);

    if (t1 > t2) {
      vetorTimes[posicao] = vetorTimes[timeJogando];
      posicao++;
      timeJogando += 2;
    } else {
      vetorTimes[posicao] = vetorTimes[timeJogando + 1];
      posicao++;
      timeJogando += 2;
    } if (posicao == 8) {
      posicao = 0;
      timeJogando = 0;
    }
  }

  for (int i = 0; i < 4; i++) {

    int t1 = 0;
    int t2 = 0;

    scanf("%i %i", &t1, &t2);

    if (t1 > t2) {
      vetorTimes[posicao] = vetorTimes[timeJogando];
      posicao++;
      timeJogando += 2;
    } else {
      vetorTimes[posicao] = vetorTimes[timeJogando + 1];
      posicao++;
      timeJogando += 2;
    }
    if (posicao == 4) {
      posicao = 0;
      timeJogando = 0;
    }
  }

  for (int i = 0; i < 2; i++) {

    int t1 = 0;
    int t2 = 0;

    scanf("%i %i", &t1, &t2);

    if (t1 > t2) {
      vetorTimes[posicao] = vetorTimes[timeJogando];
      posicao++;
      timeJogando += 2;
    } else {
      vetorTimes[posicao] = vetorTimes[timeJogando + 1];
      posicao++;
      timeJogando += 2;
    }
    if (posicao == 2) {
      posicao = 0;
      timeJogando = 0;
    }
  }

  scanf("%i %i", &t1, &t2);

  if (t1 > t2) {
    vetorTimes[posicao] = vetorTimes[timeJogando];
  } else {
    vetorTimes[posicao] = vetorTimes[timeJogando + 1];
    }
  printf("%c\n", vetorTimes[posicao]);
}
