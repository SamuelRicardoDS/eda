#include <stdio.h>


void moveX(char *palavra, int i) {
  if(palavra[i]== '\0') {
    return;
  }
 
  printf("%c", palavra[i]);
  moveX(palavra, i+1);
}

int main() {
  char palavra[100];
  scanf("%s", palavra);
  int i = 0;
  moveX(palavra, i);
  printf("\n");
}