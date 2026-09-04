/*
	Name: Algoritmo para exibir a face de lançamentos de um dado
	Author: Nicolas Porto
	Date: 04/09/26 15:00
	Description: Algoritmo que exibe a quantidade de vezes que uma face de um dado caiu usando PARA FAÇA
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale (LC_ALL,"Portuguese");

    int a, b, c, d, e, f, face, cont;

    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    face = 0;

    for (cont = 0; cont < 50; cont = cont + 1)
    {
        printf("Qual foi a face do dado que caiu? ");
        scanf("%i", &face);

        if (face == 1)
            a = a + 1;

        else if (face == 2)
            b = b + 1;

        else if (face == 3)
            c = c + 1;

        else if (face == 4)
            d = d + 1;

        else if (face == 5)
            e = e + 1;

        else if (face == 6)
            f = f + 1;
    }

    printf("O número de vezes que a face 1 caiu foi: %i\n", a);
    printf("O número de vezes que a face 2 caiu foi: %i\n", b);
    printf("O número de vezes que a face 3 caiu foi: %i\n", c);
    printf("O número de vezes que a face 4 caiu foi: %i\n", d);
    printf("O número de vezes que a face 5 caiu foi: %i\n", e);
    printf("O número de vezes que a face 6 caiu foi: %i", f);
}
