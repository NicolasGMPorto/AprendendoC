/*
    Name: VotacaoCase.cpp
    Author: Nicolas Porto
    Date: 11/10/26
    Description: Programa criado para realizar uma votacao
*/

#include <stdio.h>
#include <stdlib.h>

main() {

    int c1, c2, c3, c4, vn, vb, voto;

    c1 = c2 = c3 = c4 = vn = vb = voto = 0;

    while(1) {

        puts("Urna Eletronica");
        puts("\n");
        puts("1 - Candidato A");
        puts("2 - Candidato B");
        puts("3 - Candidato C");
        puts("4 - Candidato D");
        puts("5 - Voto nulo");
        puts("6 - Voto em branco");
        puts("0 - Encerrar");
        puts("\n");

        printf("Digite o numero do seu candidato: ");
        scanf("%d", &voto);

        switch(voto) {

            case 1:
                printf("Voce escolheu o candidato A\n");
                c1++;
                break;

            case 2:
                printf("Voce escolheu o candidato B\n");
                c2++;
                break;

            case 3:
                printf("Voce escolheu o candidato C\n");
                c3++;
                break;

            case 4:
                printf("Voce escolheu o candidato D\n");
                c4++;
                break;

            case 5:
                printf("Voce optou pelo voto nulo\n");
                vn++;
                break;

            case 6:
                printf("Voce optou por votar em branco\n");
                vb++;
                break;

            case 0:
                printf("\nVoce optou por encerrar o sistema.\n\n");

                printf("Votos do candidato A: %d\n", c1);
                printf("Votos do candidato B: %d\n", c2);
                printf("Votos do candidato C: %d\n", c3);
                printf("Votos do candidato D: %d\n", c4);
                printf("Votos nulos: %d\n", vn);
                printf("Votos brancos: %d\n", vb);

                exit(0);

            default:
                printf("Opcao invalida! Digite um numero de 0 a 6.\n");
                break;
        }

        puts("\n");
    }
}
