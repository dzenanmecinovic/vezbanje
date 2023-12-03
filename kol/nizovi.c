#include <stdio.h>

// primer
void f(int a[], int size)
{
    printf("f: %d\n", size);
}

int main()
{

    int d[] = {1, 2, 3};
    printf("main %d\n", sizeof(d) / sizeof(d[0]));
    f(d, sizeof(d) / sizeof(d[0]));
    return 0;

    /*
        Funkcija koja prima niz moze bit deklarisana na neki od sledecih nacina:

        tip imeFunkcije(tip imeNiza[dimenzija])
        tip imeFunkcije(tip imeNiza[])

        Posto se u funkciju prenosi samo adresa pocetka niza, a ne i dimenzija niza,
        prvi oblik deklaracije i nema puno smisla.
    */
}