/*
	Name: Lista usando while para exibir o gênero de 20 pessoas
	Author: Nicolas Porto
	Date: 04/09/26 14:57
	Description: Lista para exibir o gênero de 20 pessoas usando a estrutura repita até
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale (LC_ALL,"Portuguese");

    int conth, contf, contnum, continv;
    char genero;

    conth = 0;
    contf = 0;
    contnum = 0;
    continv = 0;
    genero = ' ';

    do
    {
        printf("Qual o seu gênero? ");
        scanf(" %c", &genero);

        if (genero == 'h' || genero == 'H')
            conth = conth + 1;

        else if (genero == 'f' || genero == 'F')
            contf = contf + 1;

        else
            continv = continv + 1;

        contnum = contnum + 1;

    } while (contnum < 20);

    printf("A quantidade de mulheres é %i, a quantidade de homens é %i e a quantidade de inválidos é %i",
           contf, conth, continv);
}

