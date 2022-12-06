#include <stdio.h>

int count = 0;

int pares(char *palavra) {
  int i = 0;
  if(palavra[i] != '\0') {
    if(palavra[i] == palavra[i + 2]) {
      count ++;
    }
    i++;
    pares(palavra+1);
  }
  return count;
}

int main() {
  char palavra[200];
  scanf("%s", palavra);
  int contagem = pares(palavra);
  printf("%i\n", contagem);

}