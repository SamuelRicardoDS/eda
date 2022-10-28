#include<stdio.h>

int main() {
    int n = 0;
    int diferenca = 0;
    int neto1 = 0; 
    int neto2 = 0;
    int teste = 1;

    scanf("%i",&n);
    while(n != 0) {

        neto1 = 0;
        neto2 = 0;
        diferenca = 0;

        printf("Teste %i\n", teste);

        while(n--) {
            scanf("%i %i", &neto1, &neto2);
            int d = neto1 - neto2;
            diferenca += d;
            printf("%d\n", diferenca);
        }       
        teste++;
        printf("\n");
        scanf("%i",&n);
    }

    return 0;
}