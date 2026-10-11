/*
	Name: Fatorial.cpp
	Author: Nicolas Porto
	Date: 10/10/26 21:30
	Description: Algoritmo para calcular fatorial de números inteiros
*/

#include <stdio.h>

main(){
	
	int num, fat;
	
	num = 0; fat = 1;
	
	printf("Digite o numero que voce deseja fatorar: "); scanf("%d", &num);
	printf("%d!= ", num);
	
	while (num != 0) {
	
	fat = fat * num;
	printf("%d x ", num);
	num = num - 1;	
	
}
	
printf("= %d", fat);

}
