/*
	Name: Algoritmo para exibir uma lista do número positivo até seu equivalente negativo
	Author: Nicolas Porto
	Date: 04/09/26 14:56
	Description: Algortimo para exibir uma lista usando enquanto faça
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale (LC_ALL,"Portuguese");

    int num, neg, cont;

    num = 0;
    neg = 0;
    cont = 0;

    printf("Digite um número: ");
    scanf("%i", &num);

    neg = 0 - num;
    cont = num;

    do
    {
        printf("%i\n", cont);
        cont = cont - 1;

    } while (cont >= neg);
}

