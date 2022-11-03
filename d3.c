#include <stdio.h>

int main() {
    int dia = 0;
    int numRestaurantes = 0;
    int codigoRestaurante;
    int notaRestaurante;

    while (scanf("%d", &numRestaurantes) > 0) {
        int notaMaxima = -1;
        int codigoMenor = 0;
        for(int i = 0; i < numRestaurantes; i++) {
            scanf("%d %d", &codigoRestaurante, &notaRestaurante);
            if(notaRestaurante > notaMaxima) {
                codigoMenor = codigoRestaurante;
                notaMaxima = notaRestaurante;
            }
            else if(notaRestaurante == notaMaxima && codigoMenor > codigoRestaurante) {
                 codigoMenor = codigoRestaurante;
            }
        }
        numRestaurantes--;
        dia ++;
            printf("Dia %d\n%d\n\n", dia, codigoMenor);
    }
    return 0;
}