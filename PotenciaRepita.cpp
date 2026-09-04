/*
	Name: Potência usando While
	Author: Nicolas Porto
	Date: 04/09/26 14:53
	Description: Algoritmo para calcular potência usando while (repita)
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale (LC_ALL,"Portuguese");

    float base, resp;
    int cont, expoente;

    base = 0.0;
    expoente = 0;
    resp = 1.0;
    cont = 0;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor do expoente: ");
    scanf("%i", &expoente);

    while (cont < expoente)
    {
        resp = resp * base;
        cont = cont + 1;
    }

    printf("O resultado final é %.2f", resp);
}
