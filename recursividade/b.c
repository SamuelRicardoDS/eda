#include <stdio.h>


void moveX(char *palavra) {
  
  if(*palavra == '\0') {
    return;
  }

  if(*palavra == 'x' ) {
    moveX(palavra+1); 
    printf("x");
  } else {
    printf("%c", *palavra);
    moveX(palavra+1);
  } 
}

int main() {
  char palavra[100];
  scanf("%s", palavra);
  moveX(palavra);
  printf("\n");
}