# include <stdio.h>

int main(){
  int n, value;
  int sum = 0;
  int i = 0;

  scanf("%d", &n);

  while(i < n){
    scanf("%d" , &value);
    sum += value;
    i++;
  }

  printf("%d\n", sum);
}