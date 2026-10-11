/*
	Name: Azulejos.cpp
	Author: Nicolas Porto
	Date: 10/10/26 20:51
	Description: Algoritmo criado para calcular a quantidade de azulejos para cobrir uma parede
*/

#include <stdio.h>

main(){
	
	float aParede, aAzulejo, lParede, lAzulejo, parede, azulejo, pecas;
	
	aParede = aAzulejo = lParede = lAzulejo = parede = azulejo = pecas = 0.0;
	
	printf("Digite a altura da parede em metros: "); scanf("%f", &aParede);
	printf("Digite a largura da parede em metros: "); scanf("%f", &lParede);
	printf("Digite a altura do azulejo em metros: "); scanf("%f", &aAzulejo);
	printf("Digite a largura do azulejo em metros: "); scanf("%f", &lAzulejo);

	parede = aParede * lParede;
	azulejo = (aAzulejo * lAzulejo);
	pecas = parede / azulejo;
	
	printf("A quantidade de pecas necessarias para cobrir a parede de %.2f m2 sao de: %.2f", parede, pecas);
	
}
