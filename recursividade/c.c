#include <stdio.h>

int calcNine(int input, int sum) {
  printf("%i\n", input);
  while(input>0) {
    sum += input % 10;
    input /= 10;
  }
  printf("%i\n", sum);
  printf("%i", input);
  return input;
}

int main() {
  int sum = 0;
  int input;
  while(scanf("%i", &input) > 0) {
    calcNine(input, sum);
  }

}