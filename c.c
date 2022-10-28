#include<stdio.h>

int main() {
    int n, evenOrOdd, alice, beto;


    scanf("%i",&n);
    while(n != 0) {
        alice = 0;
        beto = 0;

        for(int i = 0; i < n; i++) {
            scanf("%i",&evenOrOdd);
            if (evenOrOdd == 0) {
                alice +=1;
            } else if(evenOrOdd == 1) {
                beto +=1;
            }
        }
        printf("Alice ganhou %i e beto ganhou %i \n", alice, beto);
        scanf("%i",&n);
    }

    return 0;
}