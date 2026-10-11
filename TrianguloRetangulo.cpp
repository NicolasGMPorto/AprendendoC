/*
	Name: TrianguloRetangulo.cpp
	Author: Nicolas Porto
	Date: 10/10/26 20:38
	Description: Algoritmo criado para calcular a area de um triângulo retângulo
*/

#include <stdio.h>

main(){
	
	float base, altura, area;
	
	base = altura = area = 0.0;
	
	printf("Digite o valor da base: "); scanf("%f", &base);
	printf("Digite o valor da altura: "); scanf("%f", &altura);
	
	area = (base * altura) / 2.0;
	
	printf("A area do triangulo retangulo e: %.2f", area);
	
}
