#include <stdio.h>

int main()
{
    int numlinhas;
    int colunas = 11;
    int numGalhos;
    char ladoGalho;
    int linhaGalho;

    scanf("%i", &numlinhas);
    scanf("%i", &numGalhos);
    char jogo[numlinhas][colunas];

    for(int i = 0; i < numlinhas; i++) {
        for(int j = 0; j < 11; j++) {
           jogo[i][j] = '0';
        }
    }  
    
    for(int i = 0; i < numlinhas; i++) {
        for(int j = 0; j < 11; j++) {
           printf("%c", jogo[i][j]);
        }
        printf("\n");
    }
    
    }
