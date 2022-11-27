#include <stdio.h>

void printInOrder(char *minhaString) {
  if(*minhaString == '\0') {
    return;
  }

  printf("%c", *minhaString);
  printInOrder(minhaString + 1);
}

void printPostOrder(char *minhaString) {
  if(*minhaString == '\0') {
    return;
  }

  printPostOrder(minhaString + 1);
  printf("%c", *minhaString);
}

int main() {
  char string[1001] = "mano olha q belezura";

  printf("Print in order:\n");
  printInOrder(string);
  printf("\n\n");

  printf("Print post order:\n");
  printPostOrder(string);
  printf("\n");
}
