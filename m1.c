#include <stdio.h>

int main()
{
    int numlinhas;
    int colunas = 11;
    int numGalhos;
    char ladoGalho;
    int linhaGalho;
    char ladoLenhador;
    char acaoLenhador;
    int alturaLenhador = 0;

    scanf("%i", &numlinhas);
    scanf("%i", &numGalhos);

    char jogo[numlinhas][colunas];
    for (int i = 0; i < numlinhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (j == 4 || j == 5 || j == 6)
            {
                jogo[i][j] = '|';
            }
            else
            {
                jogo[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < numGalhos; i++)
    {
        scanf(" %c %i", &ladoGalho, &linhaGalho);
        if (ladoGalho == 'E')
        {
            jogo[linhaGalho - 1][1] = '-';
            jogo[linhaGalho - 1][2] = '-';
            jogo[linhaGalho - 1][3] = '-';
        }
        else if (ladoGalho == 'D')
        {
            jogo[linhaGalho - 1][9] = '-';
            jogo[linhaGalho - 1][8] = '-';
            jogo[linhaGalho - 1][7] = '-';
        }
    }

    scanf(" %c", &ladoLenhador);
    if (ladoLenhador == 'E')
    {
        jogo[alturaLenhador][2] = 'L';
        jogo[alturaLenhador + 1][2] = 'L';
    }
    else if (ladoLenhador == 'D')
    {
        jogo[alturaLenhador][8] = 'L';
        jogo[alturaLenhador + 1][8] = 'L';
    }

    printf("~~~~~~~~~~~\n");
    for (int i = numlinhas - 1; i >= 0; i--)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%c", jogo[i][j]);
        }
        printf("\n");
    }
    printf("~~~~~~~~~~~\n");

    while (scanf(" %c", &acaoLenhador) > 0)
    {
        if (acaoLenhador == 'B')
        {
            if (ladoLenhador == 'E')
            {
                if (jogo[alturaLenhador][4] == '>')
                {
                    alturaLenhador++;
                    if (jogo[alturaLenhador + 1][3] == '-')
                    {
                        printf("**morreu**");
                        return 0;
                    }
                    else
                    {
                        jogo[alturaLenhador + 1][2] = 'L';
                    }
                }

                else
                {
                    jogo[alturaLenhador][4] = '>';
                }
            }

            else if (ladoLenhador == 'D')
            {
                if (jogo[alturaLenhador][6] == '<')
                {
                    alturaLenhador++;
                    if (jogo[alturaLenhador + 1][7] == '-')
                    {
                        printf("**morreu**\n");
                        return 0;
                    }
                    else
                    {
                        jogo[alturaLenhador + 1][8] = 'L';
                    }
                }
                else
                {
                    jogo[alturaLenhador][6] = '<';
                }
            }
        }

        else if (acaoLenhador == 'T')
        {
            if (ladoLenhador == 'E')
            {
                if (jogo[alturaLenhador][8] == '-' || jogo[alturaLenhador + 1][8] == '-')
                {
                    printf("**beep**\n");
                    continue;
                }
                else
                {
                    jogo[0][2] = ' ';
                    jogo[1][2] = ' ';
                    jogo[alturaLenhador][8] = 'L';
                    jogo[alturaLenhador + 1][8] = 'L';
                    ladoLenhador = 'D';
                }
            }
            else if (ladoLenhador == 'D')
            {
                if (jogo[alturaLenhador][2] == '-' || jogo[alturaLenhador + 1][2] == '-')
                {
                    printf("**beep**\n");
                    continue;
                }
                else
                {
                    jogo[alturaLenhador][2] = 'L';
                    jogo[alturaLenhador + 1][2] = 'L';
                    jogo[0][8] = ' ';
                    jogo[1][8] = ' ';
                    ladoLenhador = 'E';
                }
            }
        }

        printf("~~~~~~~~~~~\n");
        for (int i = numlinhas - 1; i >= 0; i--)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("%c", jogo[i][j]);
            }
            printf("\n");
        }
        printf("~~~~~~~~~~~\n");
    }
}