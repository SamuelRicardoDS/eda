#include <stdio.h>

int sumOfAll(int n) {
    int sumofall = 0;
    while (n > 0) {
      sumofall += n % 10;
      n = n / 10;
    } 
    return sumofall;
}

int calcNine(int sum, int degree, int degreeSum) {
    if(sum > 9) {
        degreeSum = sumOfAll(sum);
        printf("%i\n", degreeSum);
        printf(" grau: %i\n", degree);
        calcNine(degreeSum, degree + 1, sum);
    } else if (sum == 9) {
      printf("é múltiplo\n");
      return degree;
    }
      return degree;
  }


int main() {
  int degree = 1;
  int degreeSum = 0;
  char input[100];

  while(scanf("%s", input) > 0 && input[0] != '0') {
    int sum = 0;
    for(int i = 0; input[i] != 0; i++) {
      sum += input[i] - 48;
    }
    printf("%i\n", sum);

    calcNine(sum, degree, degreeSum);

    if(degree > 0) {
      printf("%s is a multiple of 9 and has 9-degree %i.\n", input, degree);
    } else {
      printf("%s is not a multiple of 9.\n", input);
    }
  }
}