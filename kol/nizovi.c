#include <stdio.h>
#include <math.h>
#define MAX 100

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

    // int someNums[] = {5, 25, 100, 500};
    // char karakteri[] = {'A', 'B', 'C', 'D'};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Broj %d: %d\n", i + 1, someNums[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Karakter %d: %c\n", i + 1, karakteri[i]);
    // }

    // printf("broj 1 - %d \n", someNums[0]);
    // printf("broj 2 - %d \n", someNums[1]);
    // printf("broj 3 - %d \n", someNums[3]);

    // karakteri[0] = 'K';
    // printf("Slovo %c \n", karakteri[0]);

    // aritmeticka sredina niza brojeva deljivih sa 3

    // int i, n, k = 0, niz[MAX];
    // double suma = 0;
    // printf("broj elemenata:");
    // scanf("%d", &n);
    // printf("Elementi niza:");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    //     if (niz[i] % 3 == 0)
    //     {
    //         suma += niz[i];
    //         k++;
    //     }
    // }
    // printf("aritmeticka sredina: %.2f\n", suma / k);

    // suma parnih i suma neparnih a)
    // suma parnih indeksa i neparnih indeksa b)

    // int i, n, niz[MAX], sumap = 0, suman = 0;
    // a)
    // printf("broj elemenata:");
    // scanf("%d", &n);
    // printf("elementi niza: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    //     if (niz[i] % 2 == 0)
    //     {
    //         sumap += niz[i];
    //     }
    //     else
    //     {
    //         suman += niz[i];
    //     }
    // }
    // printf("suma parnih: %d\nsuma neparnih: %d", sumap, suman);

    // b)
    // printf("broj elemenata:");
    // scanf("%d", &n);
    // printf("elementi niza:");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &niz[i]);
    //     if (i % 2 == 0)
    //     {
    //         sumap += niz[i];
    //     }
    //     else
    //     {
    //         suman += niz[i];
    //     }
    // }
    // printf("suma parnih indeksa: %d\nsuma neparnih indeksa: %d", sumap, suman);

    /*
    10.10. Саставити програм који прочита два низа, дужине n, са реалним компонентама,
A A1 A2 A3 = ( 1 2 , ,..., n ) и B B1 B2 B3 = ( 1 2 , ,..., n ) израчунава њихов скаларни производ= ∑ и
исписује добијени резултат.
*/

    // int i, n;
    // double proizvod = 0, niz1[MAX], niz2[MAX];
    // printf("Broj elemenata: ");
    // scanf("%d", &n);
    // printf("Elementi niza A: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%lf", &niz1[i]);
    // }
    // printf("Elementi niza B: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%lf", &niz2[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     proizvod += niz1[i] * niz2[i];
    // }
    // printf(" Skalarni proizvod je = %.3f\n", proizvod);

    // sastavi program koji ucitava elemente niza A (a1,a2,a3...) duzine n i niza B (b1,b2,b3...) duzine m i spaja
    // u jedan niz C (a1,a2...b1,b2...) duzine n+m

    // int i, n, m, nizA[MAX], nizB[MAX], nizC[MAX];
    // printf("Broj elemenata niza A: ");
    // scanf("%d", &n);
    // printf("Elementi niza A: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &nizA[i]);
    // }
    // printf("Broj elemenata niza B: ");
    // scanf("%d", &m);
    // printf("Elementi niza B: ");
    // for (i = 0; i < m; i++)
    // {
    //     scanf("%d", &nizB[i]);
    // }
    // printf("Elementi niza C: ");
    // for (i = 0; i < (m + n); i++)
    // {
    //     if (i < n)
    //     {
    //         nizC[i] = nizA[i];
    //     }
    //     else
    //     {
    //         nizC[i] = nizB[i - n];
    //     }
    //     printf("%d ", nizC[i]);
    // }

    // program ucitava elemente dva niza duzine n A (a1,a2,a3...) i B (b1,b2,b3...) i formira i ispisuje
    // novi niz ciji su elementi C (a1+b1, a2+b2, a3+b3...)

    // int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
    // printf("Broj elemenata nizova: ");
    // scanf("%d", &n);
    // printf("Elementi niza A: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &nizA[i]);
    // }
    // printf("Elementi niza B: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &nizB[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     nizC[i] = nizA[i] + nizB[i];
    // }
    // printf("Elementi niza C: ");
    // for (i = 0; i < n; i++)
    // {
    //     printf(" %d", nizC[i]);
    // }

    // formirati niz C od dva zadata niza realnih brojeva A i B (svaki duzine 5) na sledeci nacin:
    //  Ci = (Ai)3 / 3 + 2 * Ai * Bi

    // #define MAXIMUM 5

    //     float nizA[MAXIMUM], nizB[MAXIMUM], nizC[MAXIMUM];
    //     int i;
    //     printf("Elementi niza A: ");
    //     for (i = 0; i < MAXIMUM; i++)
    //     {
    //         scanf("%f", &nizA[i]);
    //     }
    //     printf("Elementi niza B: ");
    //     for (i = 0; i < MAXIMUM; i++)
    //     {
    //         scanf("%f", &nizB[i]);
    //     }

    //     for (i = 0; i < MAXIMUM; i++)
    //     {
    //         nizC[i] = pow(nizA[i], 3) / 3 + 2 * nizA[i] * nizB[i];
    //         printf("%.2f ", nizC[i]);
    //     }

    // sastavi program za formiranje niza C od dva niza celih brojeva A i B  (svaki duzine t) na sledeci nacin:
    // A[0] + B[4],...,A[4] + B[0]. Ispisati niz C.

    // #define MAXIMUM 5
    //     int i, nizA[MAXIMUM], nizB[MAXIMUM], nizC[MAXIMUM];
    //     printf("Elementi niza A: ");
    //     for (i = 0; i < MAXIMUM; i++)
    //     {
    //         scanf("%d", &nizA[i]);
    //     }
    //     printf("Elementi niza B: ");
    //     for (i = 0; i < MAXIMUM; i++)
    //     {
    //         scanf("%d", &nizB[i]);
    //     }
    //     printf("Elementi niza C: ");
    //     for (i = 0; i < MAXIMUM; i++)
    //     {
    //         nizC[i] = nizA[i] + nizB[MAXIMUM - 1 - i];
    //         printf("%d ", nizC[i]);
    //     }

    // sastavi pgoram koji ucita elemente niza A (a1,a2,...an) duzine n
    // i niza B (b1,b2,...bn) duzine m, zatim formira niz C koji se sastoji
    // od parnih elemenata niza A i niza B.

    int i, n, m, nizA[MAX], nizB[MAX], nizC[MAX], counter = 0;
    printf("Broj elemenata niza A: ");
    scanf("%d", &n);
    printf("Elementi niza A: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nizA[i]);
    }
    printf("Broj elemenata niza B: ");
    scanf("%d", &m);
    printf("Elementi niza B: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &nizB[i]);
    }
    printf("\nElementi niza C: ");
    for (i = 0; i < n; i++)
    {
        if (nizA[i] % 2 == 0)
        {
            nizC[counter] = nizA[i];
            counter++;
        }
    }
    for (i = 0; i < m; i++)
    {
        if (nizB[i] % 2 == 0)
        {
            nizC[counter] = nizB[i];
            counter++;
        }
    }

    for (i = 0; i < counter; i++)
    {
        printf("%d ", nizC[i]);
    }

    return 0;
}