#include <stdio.h>

int imaMagicnuCifru(int broj)
{
    int cifra;
    int pozicija = 1;

    while (broj > 0)
    {
        cifra = broj % 10;

        if (cifra != pozicija)
        {
            return 0; // Nije magična cifra
        }

        broj /= 10;
        pozicija++;
    }

    return 1; // Sve cifre su magične
}

int main()
{
    int unos;

    printf("Unesite cele brojeve. Unesite 0 da biste zavrsili:\n");

    do
    {
        printf("Unesite broj: ");
        scanf("%d", &unos);

        if (unos != 0)
        {
            if (imaMagicnuCifru(unos))
            {
                printf("Broj %d ima magicne cifre.\n", unos);
            }
            else
            {
                printf("Broj %d nema magicne cifre. Kraj programa.\n", unos);
                break;
            }
        }
    } while (unos != 0);

    return 0;
}
