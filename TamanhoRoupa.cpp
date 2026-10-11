/*
	Name: TamanhoCamisa.cpp
	Author: Nicolas Porto
	Date: 11/10/26 11:35
	Description: Algoritmo criado para informar o tamanho da camisa
*/

#include <stdio.h>

main(){
	
	char tamanho;
	
	tamanho = 'n';
	
	printf("Digite o tamanho presente na peca de roupa: "); scanf(" %c", &tamanho);
	
	if (tamanho == 'p' || tamanho == 'P')
		printf("Essa roupa e pequena");
	else if (tamanho == 'm' || tamanho == 'M')
		printf("Essa roupa e media");
	else if (tamanho == 'g' || tamanho == 'G')
		printf("Essa roupa e grande");
	else printf("Tamanho invalido");
}
