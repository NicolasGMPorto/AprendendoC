/*
	Name: ZeChico
	Author: Nicolas Porto
	Date: 11/10/26 11:59
	Description: Algoritmo criado para ver em quantos anos Ze ultrapassa Chico
*/

#include <stdio.h>

main(){
	
	int aChico, aZe, cChico, cZe, cont;
	
	aChico = 150; aZe = 110; cChico = 2; cZe = 3; cont = 0;
	
	do {
		
		aChico = aChico + cChico;
		aZe = aZe + cZe;
		cont++;
		
	} while (aZe <= aChico);
	
	printf("Demorou %d anos para Ze passar Chico em altura", cont);
	
}

