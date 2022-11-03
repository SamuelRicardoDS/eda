#include <stdio.h>
#include <string.h>

int main()
{
    int linhasTexto;
    int larguraCursor;
    int alturaCursor;
    char movimento;
    int colunasTexto;

    scanf("%i", &linhasTexto);
    char texto[linhasTexto][1001];

    for (int i = 0; i < linhasTexto; i++)
    {
        scanf(" %1001[^\n]", texto[i]);
    }

    scanf("%i %i", &alturaCursor, &larguraCursor);

    while (scanf(" %c", &movimento) > 0)
    {
        if (movimento == 'j')
        {
            if (alturaCursor < linhasTexto)
            {
                alturaCursor++;
            }
        }
        else if (movimento == 'k')
        {
            if (alturaCursor > 1)
            {
                alturaCursor--;
            }
        }

        colunasTexto = strlen(texto[alturaCursor - 1]);
        if (larguraCursor > colunasTexto)
        {
            printf("%i %i %c\n", alturaCursor, colunasTexto, texto[alturaCursor - 1][colunasTexto - 1]);
        }
        else
        {
            printf("%i %i %c\n", alturaCursor, larguraCursor, texto[alturaCursor - 1][larguraCursor - 1]);
        }
    }
}