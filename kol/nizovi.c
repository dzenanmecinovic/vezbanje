#include <stdio.h>
// #define MAX 10

// primer
// void f(int a[], int size)
// {
//     printf("f: %d\n", size);
// }

int main()
{

    // OPERACIJE SA NIZOVIMA I RAZVRSTAVANJE ELEMENATA

    // 10.9. Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
    // а) суму парних и суму непарних бројева;
    // б) суму елемената са парним индексима и суму елемената са непарним индексима
    // int i = 0, n, niz[10], sumaParnih = 0, sumaNeparnih = 0, sumaElParniIndeks = 0, sumaElNeparniIndeks = 0;
    // printf("Broj elemenata: ");
    // scanf("%d", &n);
    // printf("Elementi niza: ");
    // for (i; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    //     if (niz[i] % 2 == 0)
    //     {
    //         sumaParnih += niz[i];
    //     }
    //     else
    //     {
    //         sumaNeparnih += niz[i];
    //     }
    //     if (i % 2 == 0)
    //     {
    //         sumaElParniIndeks += niz[i];
    //     }
    //     else
    //     {
    //         sumaElNeparniIndeks += niz[i];
    //     }
    // }

    // printf("Suma parnih elemenata: %d\n", sumaParnih);
    // printf("Suma neparnih elemenata: %d\n", sumaNeparnih);
    // printf("Suma el sa parnim indeksom: %d\n", sumaElParniIndeks);
    // printf("Suma el sa neparnim indeksom: %d\n", sumaElNeparniIndeks);

    // 10.8. Саставити програм који за унети низ (дужине n) целих бројева израчунава и исписуje аритметичку средину оних елемената низа који су дељиви са 3.
    // int i, n, niz[10], counter = 0, suma = 0;
    // printf("Broj elemenata: ");
    // scanf("%d", &n);
    // printf("Elementi niza: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    //     if (niz[i] % 3 == 0)
    //     {
    //         suma += niz[i];
    //         counter++;
    //     }
    // }
    // printf("aritmeticka: %.2f\n", (float)suma / counter);

    // 10.7. Саставити програм за израчунавање и исписивање аритметичке средине задатог низа (дужине n) целих бројева.
    // int i, n, niz[10], suma = 0;
    // printf(" Broj elemenata: ");
    // scanf("%d", &n);
    // printf(" Elementi niza: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    //     suma += niz[i];
    // }
    // printf(" aritmeticka = %.0f\n", (float)suma / n);

    // 10.6. a)

    // int niz[10];
    // printf("\n Niz zauzima %d bajtova.", sizeof(niz) / sizeof(int));

    // 10.6. b)

    // int i, brojElemenata;
    // int niz[] = {1, 2, 3, 4, 5, 6};
    // brojElemenata = sizeof(niz) / sizeof(int);
    // for (i = 0; i < brojElemenata; i++)
    // {
    //     printf("niz[%d]=%d\n", i, niz[i]);
    // }
    // 10.5. Саставити програм који ће учитати низ од n елемената и исписати их обрнутим редоследом

    // int i = 0, n, niz[20];

    // printf("n:");
    // scanf("%d", &n);
    // printf("Unesite niz od %d elemenata: ", n);
    // for (i; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    // }

    // printf("Obrnutni niz: ");

    // for (i = n - 1; i >= 0; i--)
    // {
    //     printf("%d ", niz[i]);
    // }

    // 10.4. Саставити програм који ће учитати низ од n елемената и исписати их оним редоследом којим су учитани.

    // int i, n, niz[20];
    // printf("n:");
    // scanf("%d", &n);
    // printf("Unesite %d elemenata: ", n);
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    // }
    // printf("\nUneti niz: ");
    // for (i = 0; i < n; i++)
    // {
    //     printf(" %d", niz[i]);
    // }
    // int i, j, niz[] = {15, 3, 9, 7, 11};
    // printf("\nRedni broj\tIndeks\tVrednost\n");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("\n%d\t\t%d\t%d", i + 1, i, niz[i]);
    // }
    // int i, n, niz[20];
    // printf(" n= ");
    // scanf("%d", &n);
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d. element niza: ", i + 1);
    //     scanf("%d", &niz[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     printf("\n%d. element niza: %d", i + 1, niz[i]);
    // }
    // int someNumbers[] = {5, 25, 100, 500};
    // char someChars[] = {'A', 'B', 'C', 'D'};

    // int x = 0;

    // for (x; x < 4; x++)
    // {
    //     printf("Number => %d \n", someNumbers[x]);
    // }

    // printf("number: %d \n", someNumbers[0]);
    // printf("number: %d \n", someNumbers[1]);
    // printf("number: %d \n", someNumbers[3]);

    // someChars[0] = 'K';
    // printf("Char: %c \n", someChars[0]);

    // int d[] = {1, 2, 3};
    // printf("main %d\n", sizeof(d) / sizeof(d[0]));
    // f(d, sizeof(d) / sizeof(d[0]));
    // return 0;

    /*
        Funkcija koja prima niz moze bit deklarisana na neki od sledecih nacina:

        tip imeFunkcije(tip imeNiza[dimenzija])
        tip imeFunkcije(tip imeNiza[])

        Posto se u funkciju prenosi samo adresa pocetka niza, a ne i dimenzija niza,
        prvi oblik deklaracije i nema puno smisla.
    */

    return 0;
}