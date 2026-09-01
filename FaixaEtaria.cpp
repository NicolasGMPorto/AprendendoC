/*
	Name: Algoritmo para classificar idades
	Author: Nicolas Porto
	Date: 01/09/26 19:15
	Description: Algoritmo para classificar idade de acordo com a faixa etária
*/

#include <stdio.h>
#include <locale.h>
main()
{
	
	setlocale (LC_ALL,"Portuguese");

	int idade;

	idade = 0;

	puts("Programa criado para classificar sua idade em uma faixa etária");
	puts("\n");
	printf("Digite a sua idade: "); scanf("%i", &idade);
	
		if (idade >= 0 && idade <= 12)
			puts("Você é uma criança");
		else if (idade >= 13 && idade <= 19)
			puts("Você é um adolescente");
		else if (idade >= 20 && idade <= 60)
			puts("Você é um adulto");
		else if (idade > 60)
			puts("Você é um idoso");
		else
			puts("Idade Inválida");
			
}
