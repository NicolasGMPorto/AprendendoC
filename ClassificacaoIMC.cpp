/*
	Name: Algoritmo para classificar imc
	Author: Nicolas Porto
	Date: 01/09/26 19:15
	Description: Algoritmo para classificar o imc de acordo com sua numeração
*/

#include <stdio.h>
#include <locale.h>
main()
{
	
	setlocale (LC_ALL,"Portuguese");

	float altura, peso, imc;

	altura = peso = imc = 0.0;

	puts("Programa criado para classificar seu imc");
	puts("\n");
	printf("Digite a sua altura em metros: "); scanf("%f", &altura);
	printf("Digite o seu peso em quilos: "); scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
		if (imc < 16)
			puts("Você possui magreza grave");
		else if (imc >= 16 && imc < 17)
			puts("Você possui magreza moderada");
		else if (imc >= 17 && imc < 18.5)
			puts("Você possui magreza leve");
		else if (imc >= 18.5 && imc < 25)
			puts("Você é saudável");
		else if (imc >= 25 && imc < 30)
			puts("Você possui sobrepeso");
		else if (imc >= 30 && imc < 35)
			puts("Você possui obesidade grau I");
		else if (imc >= 35 && imc <= 40)
			puts("Você possui obesidade grau II");
		else
			puts("Você possui obesidade grau III");
			
}
