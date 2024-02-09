#include <stdio.h>

int main()
{
    int redniBrojStudenta, brojTacnihOdgovora = 0;

    // Unos rednog broja studenta
    printf("Unesite redni broj studenta (1-9): ");
    scanf("%d", &redniBrojStudenta);

    // Unos odgovora za svako pitanje
    if (redniBrojStudenta > 0 && redniBrojStudenta < 10)
    {
        for (int i = 0; i < 7; i++)
        {
            int odgovor;
            printf("Unesite odgovor za pitanje %d: ", i + 1);
            scanf("%d", &odgovor);

            // Provera da li je student sa zadatim rednim brojem tacno odgovorio na pitanje
            if (odgovor % 10 == redniBrojStudenta || (odgovor / 10) % 10 == redniBrojStudenta || (odgovor / 100) % 10 == redniBrojStudenta)
            {
                brojTacnihOdgovora++;
            }
        }
        // Ispis rezultata
        printf("\nUkupan broj tacnih odgovora studenta %d: %d\n", redniBrojStudenta, brojTacnihOdgovora);
    }
    else
    {
        printf("Broj mora biti izmedju 1 i 9!");
    }

    return 0;
}
