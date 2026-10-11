/*
	Name: ImcBasico.cpp
	Author: Nicolas Porto
	Date: 11/10/26 11:17
	Description: Algoritmo que lê altura e peso e informa o IMC
*/

#include <stdio.h>

main(){
	
	char nome[50];
    float altura, peso, imc;
	
	altura = peso = imc = 0.0;
	
	printf("Digite o seu nome: "); scanf(" %49[^\n]", nome);
	printf("Digite a sua altura em metros: "); scanf("%f", &altura);
	printf("Digite o seu peso em kg: "); scanf("%f", &peso);
	
	imc = peso / (altura*altura);
	
	printf("%s tem %.2f de altura, %.2f de peso e um imc de %.2f", nome, altura, peso, imc);
	
}
