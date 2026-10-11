/*
	Name: Fibonacci.cpp
	Author: Nicolas Porto
	Date: 10/10/26 21:36
	Description: Algoritmo para calcular a sequencia de fibonacci
*/

#include <stdio.h>

main(){
	
	int ant, at, prox, qtdeElem, cont;
	
	at = 1; ant = 1; prox = 0; qtdeElem = 0; cont = 2;
	
	printf("Digite a quantidade de elementos de Fibonacci que voce deseja ver: "); scanf("%d", &qtdeElem);
	printf("%d, ", ant);
	printf("%d", at);
	
	do {
		
		prox = at + ant;
		printf(", %d", prox);
		ant = at;
		at = prox;
		cont++;

	} while (cont < qtdeElem);
}
