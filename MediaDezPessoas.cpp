/*
	Name: MediaDezPessoas.cpp
	Author: Nicolas Porto
	Date: 10/10/26 20:20
	Description: Algoritmo criado para ler a idade de 10 pessoas e mostrar a média
*/

#include <stdio.h>

main(){

int id1, id2, id3, id4, id5, id6, id7, id8, id9, id10;
float media;

id1 = id2 = id3 = id4 = id5 = id6 = id7 = id8 = id9 = id10 = 0;
media = 0.0;

printf("Digite a idade da primeira pessoa: "); scanf("%d", &id1);
printf("Digite a idade da segunda pessoa: "); scanf("%d", &id2);
printf("Digite a idade da terceira pessoa: "); scanf("%d", &id3);
printf("Digite a idade da quarta pessoa: "); scanf("%d", &id4);
printf("Digite a idade da quinta pessoa: "); scanf("%d", &id5);
printf("Digite a idade da sexta pessoa: "); scanf("%d", &id6);
printf("Digite a idade da setima pessoa: "); scanf("%d", &id7);
printf("Digite a idade da oitava pessoa: "); scanf("%d", &id8);
printf("Digite a idade da nona pessoa: "); scanf("%d", &id9);
printf("Digite a idade da decima pessoa: "); scanf("%d", &id10);

media = (id1 + id2 + id3 + id4 + id5 + id6 + id7 + id8 + id9 + id10) / 10.0;

printf("A media de idade dessa pequena populacao e igual a: %.2f", media);
}

