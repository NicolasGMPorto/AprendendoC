/*
	Name: Soma.cpp
	Author: Nicolas Porto 
	Date: 27/08/26 10:47
	Description: Programa para somar 2 números inteiros 
*/

//biblioteca de recursos
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	int a,b,soma; //declaração de variáveis
	a = 0; b = 0; soma = 0; //inicialização de variáveis
	puts("Programa feito para somar 2 números inteiros");
	puts("\n");
	printf("Digite o valor de A: "); //o (f) indica formatação
	scanf("%d",&a); //o d indica decimal, e é necessário o & para levar o dado pra memória
    printf("Digite o valor de B: "); //o (f) indica formatação
	scanf("%d",&b);
	soma = (a + b);
	printf("A soma de %d + %d é igual a: %d", a, b, soma);
}

