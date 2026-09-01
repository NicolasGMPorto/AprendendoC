/*
	Name: Algoritmo para inverter valores
	Author: Nicolas Porto
	Date: 01/09/26 19:05
	Description: Algoritmo para trocar de valor as variáveis sem usar uma auxiliar
*/

#include <stdio.h>
#include <locale.h>
main()
{
	
	setlocale (LC_ALL,"Portuguese");

	float a,b;

	a = b = 0.0;

	puts("Programa criado para inverter o valor de duas variáveis");
	puts("\n");
	printf("Digite o primeiro número: "); scanf("%f", &a);
	printf("Digite o segundo número: "); scanf("%f", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Após essa mudança, o primeiro número virou %.2f e o segundo número virou %.2f", a,b);
	
}
