/*
	Name: Gênero.cpp
	Author: Nicolas Porto 
	Date: 27/08/26 12:30
	Description: Programa para verificar se um número é par ou ímpar
*/

//biblioteca de recursos
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n1, quoc, resto;
	
	n1 = quoc = resto = 0;
	
	puts("Programa criado para verificar se um número é par ou ímpar");
	puts("\n");
	printf("Digite o número que você deseja verificar: ");scanf("%i", &n1);
	quoc = n1 / 2;
	resto = (int) n1 - (quoc * 2);
		if (resto == 0)
			puts("O número é par");
		else
			puts("O número é ímpar");
}
