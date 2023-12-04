#include <stdio.h>

/*
Sastaviti program koji broji prazne znakove(razmak, horizontalni tabulator(\0) i novi red (\n)),
slova, decimalne cifre kao i sve znakove ulaznog teksta do oznake za kraj unosa EOF.
*/

int main()
{
    int c, prazni = 0, slova = 0, cifre = 0, ukupno = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c == ' ') || (c == '\0') || (c == '\n'))
        {
            prazni++;
        }
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            slova++;
        }
        if ((c >= '0' && c <= '9'))
        {
            cifre++;
        }
    }
    ukupno = prazni + slova + cifre;
    printf("Ukupno razmaka: %d\n", prazni);
    printf("Ukupno slova: %d\n", slova);
    printf("Ukupno cifara: %d\n", cifre);
    printf("Ukupno karaktera: %d", ukupno);
    return 0;
}