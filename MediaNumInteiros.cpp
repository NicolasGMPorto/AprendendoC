/*
	Name: MediaValorPositivo.cpp
	Author: Nicolas Porto
	Date: 11/10/26 11:45
	Description: Programa criado para calcular a média de valores positivos
*/

#include <stdio.h>

main(){
	
	int soma, num, cont;
	float med;
	
	soma = num = cont = 0; med = 0.0;
	
	printf("Digite o numero que voce deseja adicionar a lista: "); scanf("%d", &num);
	if (num > 0) {
		soma = soma + num;
		cont++;
		
	}
		
		while (num > 0) {
		printf("Digite o proximo numero: "); scanf("%d", &num);
		
		if (num > 0) {
			soma = soma + num;
			cont++;
		}
	}
	
if (cont > 0) {
    med = (float)soma / cont;
    printf("A media final e: %.4f", med);
} else {
    printf("Nenhum valor positivo foi digitado.");
}
}
