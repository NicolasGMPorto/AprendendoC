/*
	Name: PotenciaBase.cpp
	Author: Nicolas Porto
	Date: 10/10/26 20:31
	Description: Programa para calcular potência lendo base e expoente
*/

#include <stdio.h>
#include <math.h>

main(){
	
float base, expoente, resultado;

base = expoente = resultado = 0.0;

printf("Digite o valor da base: "); scanf("%f", &base);
printf("Digite o valor do expoente: "); scanf("%f", &expoente);

resultado = pow(base, expoente);

printf("O resultado dessa potenciacao e igual a: %.2f", resultado);
	
}

