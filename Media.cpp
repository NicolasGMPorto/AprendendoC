/*
	Name: Média.cpp
	Author: Nicolas Porto 
	Date: 27/08/26 10:27
	Description: Programa para calcular a média entre 3 números
*/

//biblioteca de recursos
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int n1,n2,n3;
	float med;
	n1 = n2 = n3 = 0;
	med = 0.0;
	
	puts("Programa criado para calcular a média entre 3 números");
	puts("\n");
	printf("Digite o 1° número: ");scanf("%d", &n1);
	printf("Digite o 2° número: ");scanf("%d", &n2);
	printf("Digite o 3° número: ");scanf("%d", &n3);
	med = (float) (n1+n2+n3) / 3; //casting para real
	printf("A média entre %d, %d e %d é igual a: %.2f ",n1,n2,n3,med);
	
}
