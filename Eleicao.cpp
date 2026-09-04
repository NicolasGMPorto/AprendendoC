/*
	Name: Percentual de votos
	Author: Nicolas Porto
	Date: 04/09/26 14:59
	Description: Algoritmo para calcular o percentual de votos em uma eleição
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale (LC_ALL,"Portuguese");

    int canda, candb, candc, cont, voto, votoinv;
    float pcanda, pcandb, pcandc, pvotoinv;

    canda = 0;
    candb = 0;
    candc = 0;
    pcanda = 0.0;
    pcandb = 0.0;
    pcandc = 0.0;
    cont = 0;
    voto = 0;
    votoinv = 0;
    pvotoinv = 0.0;

    while (cont < 1000)
    {
        printf("Para quem vai seu voto? ");
        scanf("%i", &voto);

        if (voto == 1)
            canda = canda + 1;

        else if (voto == 2)
            candb = candb + 1;

        else if (voto == 3)
            candc = candc + 1;

        else
            votoinv = votoinv + 1;

        cont = cont + 1;
    }

    pcanda = (canda / 1000.0) * 100;
    pcandb = (candb / 1000.0) * 100;
    pcandc = (candc / 1000.0) * 100;
    pvotoinv = (votoinv / 1000.0) * 100;

    printf("A porcentagem de pessoas que votaram no candidato A foi %.2f%%\n", pcanda);
    printf("A porcentagem de pessoas que votaram no candidato B foi %.2f%%\n", pcandb);
    printf("A porcentagem de pessoas que votaram no candidato C foi %.2f%%\n", pcandc);
    printf("A porcentagem de votos inválidos foi %.2f%%", pvotoinv);
}

