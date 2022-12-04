#include <stdio.h>
#include <string.h>

int sumOfAll(int n) {
    int sumofall = 0;
    while (n > 0) {
      sumofall += n % 10;
      n = n / 10;
    } 
    return sumofall;
}

void calcNine(char *original, int sum, int degree, int degreeSum) {
    if(sum > 9) {
        degreeSum = sumOfAll(sum);
        calcNine(original, degreeSum, degree + 1, sum);
    } else {
      if(sum == 9) {
        printf("%s is a multiple of 9 and has 9-degree %i.\n", original, degree);      
      } else if (sum != 9) {
        printf("%s is not a multiple of 9.\n", original);
    }
    }
  }

int main() {
  int degree = 1;
  int degreeSum = 0;
  char input[1999];
  char original[1999];

  while(scanf("%s", input) > 0 && input[0] != '0') {
    int sum = 0;
    for(int i = 0; input[i] != 0; i++) {
      sum += input[i] - 48;
    }
    strcpy(original, input);
    calcNine(original, sum, degree, degreeSum);
  }
}