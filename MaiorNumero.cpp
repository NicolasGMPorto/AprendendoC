/*
	Name: MaiorNumero.cpp
	Author: Nicolas Porto
	Date: 11/10/26 11:28
	Description: Algoritmo para mostrar qual o maior número entre os 3 declarados
*/

#include <stdio.h>

main(){
	
	int n1, n2, n3;
	
	n1 = n2 = n3 = 0;
	
	printf("Digite o primeiro numero: "); scanf("%d", &n1);
	printf("Digite o segundo numero: "); scanf("%d", &n2);
	printf("Digite o terceiro numero: "); scanf("%d", &n3);
	
	if (n1 > n2)
		if (n1 > n3)
			printf("O %d e o maior numero declarado", n1);
		else printf("o %d e o maior numero declarado", n3);
	else if (n2 > n3)
		printf("o %d e o maior numero declarado", n2);
	else printf("o %d e o maior numero declarado", n3);
	
}
