/*
    Name: UltrapassarAltura.cpp
    Author: Nicolas Porto
    Date: 11/10/26
    Description: Algoritmo criado para ver em quantos anos uma pessoa passa outra
*/

#include <stdio.h>

main() {

    char nome1[50], nome2[50];
    int alt1, alt2, c1, c2, cont;

    alt1 = alt2 = 0;
    c1 = 2;
    c2 = 3;
    cont = 0;

    printf("Digite o primeiro nome: ");
    scanf(" %49[^\n]", nome1);

    printf("Digite o segundo nome: ");
    scanf(" %49[^\n]", nome2);

    printf("Digite a altura de %s em centimetros: ", nome1);
    scanf("%d", &alt1);

    printf("Digite a altura de %s em centimetros: ", nome2);
    scanf("%d", &alt2);

    if (alt2 > alt1) {
        printf("%s ja e maior que %s.\n", nome2, nome1);
    } else {
        do {
            alt1 = alt1 + c1;
            alt2 = alt2 + c2;
            cont++;
        } while (alt2 <= alt1);

        printf("Demorou %d anos para %s passar %s em altura.\n",
               cont, nome2, nome1);
    }

}
