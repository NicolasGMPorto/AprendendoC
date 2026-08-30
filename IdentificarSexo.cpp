/*
	Name: Gênero.cpp
	Author: Nicolas Porto 
	Date: 27/08/26 10:47
	Description: Programa para verificar o sexo de uma pessoa
*/

//biblioteca de recursos
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	
	char sexo;
	
	sexo=' ';
	
	puts("Programa criado para verificar o sexo de uma pessoa");
	puts("\n");
	printf("Digite M para masculino ou F para feminino: ");scanf("%c", &sexo);
	
		if (sexo == 'M' || sexo == 'm')
			puts("O seu sexo é masculino");
		else if (sexo == 'F' || sexo == 'f')
			puts("o seu sexo é feminino");
		else
			puts("Entrada inválida");
}
