/*
	Name: DadosPopulacao.cpp
	Author: Nicolas Porto
	Date: 11/10/26 13:11
	Description: Algoritmo para coletar dados de uma populacao
*/

#include <stdio.h>

main(){
	
	int quant, cont, fil, sfil, smil;
	float sal, ssal, medsal, ms, medfil, porc;
	
	quant = cont = fil = sfil = smil = 0; sal = ssal = medsal = ms = medfil = porc = 0.0;
	
	printf("Qual a quantidade de pessoas abrangidas? "); scanf("%d", &quant);
	
	do{
		
		puts("Proxima pessoa:");
		printf("Digite o salario do cidadao: "); scanf("%f", &sal);
		printf("Digite o numero de filhos desse cidadao: "); scanf("%d", &fil);
		puts("\n");
		ssal = ssal + sal;
		sfil = sfil + fil;
		cont++;
		
		if (sal > ms)
			ms = sal;
		if (sal <= 1000)
			smil = smil + 1;
		
	} while (cont < quant);
	
porc = (float)(smil * 100) / quant;
medfil = (float)sfil / quant;
medsal = ssal / quant;

puts("\n");
printf("A media salarial dessa populacao e de R$%.2f ", medsal);
puts("\n");
printf("A media de filhos dessa populacao e de %.2f ", medfil);
puts("\n");
printf("O maior salario dessa populacao e: R$%.2f ", ms);
puts("\n");
printf("O percentual da populacao com salario ate R$1000 e de %.2f % ", porc);
	
}

