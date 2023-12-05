#include <stdio.h>

/*
Sastaviti program koji broji prazne znakove(razmak, horizontalni tabulator(\0) i novi red (\n)),
slova, decimalne cifre kao i sve znakove ulaznog teksta do oznake za kraj unosa EOF.
*/

// int main()
// {
// int c, prazni = 0, slova = 0, cifre = 0, ukupno = 0;
// while ((c = getchar()) != EOF)
// {
//     if ((c == ' ') || (c == '\t') || (c == '\n'))
//     {
//         prazni++;
//     }
//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//     {
//         slova++;
//     }
//     if ((c >= '0' && c <= '9'))
//     {
//         cifre++;
//     }
// }
// ukupno = prazni + slova + cifre;
// printf("Ukupno razmaka: %d\n", prazni);
// printf("Ukupno slova: %d\n", slova);
// printf("Ukupno cifara: %d\n", cifre);
// printf("Ukupno karaktera: %d", ukupno);

// return 0;
// }
/*
Sastaviti program za odredjivanje broja samoglasnika i suglasnika u ulaznom tekstu.
Unos teksta se zavrsava signalom EOF.
*/

// int main()
// {
//     int c, samoglasnici = 0, suglasnici = 0;

//     while ((c = getchar()) != EOF)
//     {
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//         {
//             if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//             {
//                 samoglasnici++;
//             }
//             else
//                 suglasnici++;
//         }
//     }
//     printf("Broj samoglasnika: %d\n", samoglasnici);
//     printf("Broj suglasnika: %d", suglasnici);
//     return 0;
// }

/*
Sastaviti program za odredjivanje broja velikih slova, malih slova i cifara u ulaznom tekstu.
Unos teksta se zavrsava signalom EOF.
*/

// int main()
// {

//     int c, mala = 0, velika = 0, cifre = 0;

//     while ((c = getchar()) != EOF)
//     {
//         if (c >= 'a' && c <= 'z')
//             mala++;
//         if (c >= 'A' && c <= 'Z')
//             velika++;
//         if (c >= '0' && c <= '9')
//             cifre++;
//     }
//     printf("Broj malih slova: %d\nBroj velikih slova: %d\nBroj cifara: %d", mala, velika, cifre);
//     return 0;
// }

/*
Sastaviti program za odredjivanje broja pojavljivanja slova A u ulaznom tekstu
i izraziti tu vrednost procentualno u odnosu na sve unete znake.
Unos teksta se zavrsava signalom EOF.
*/

// int main()
// {

//     int c, slovoA, ostali;
//     float result;

//     while ((c = getchar()) != EOF)
//     {
//         if (c == 'A')
//         {
//             slovoA++;
//         }
//         else
//         {
//             ostali++;
//         }
//     }
//     result = ostali / slovoA;
//     printf("Odnos slova A i ostalih znakova: %.2f", result);
//     return 0;
// }

// int main()
// {
//     int brojUnetihZnakova = 0;
//     int brojSlovaA = 0;
//     char karakter;

//     while ((karakter = getchar()) != EOF)
//     {
//         brojUnetihZnakova++;

//         if (karakter == 'A')
//         {
//             brojSlovaA++;
//         }
//     }

//     if (brojUnetihZnakova > 0)
//     {
//         float procenatSlovaA = (float)brojSlovaA / brojUnetihZnakova * 100;
//         printf("\nBroj slova 'A': %d\n", brojSlovaA);
//         printf("Ukupan broj unetih znakova: %d\n", brojUnetihZnakova);
//         printf("Procenat slova 'A' u odnosu na sve znakove: %.2f%%\n", procenatSlovaA);
//     }
//     else
//     {
//         printf("\nNiste uneli nijedan znak.\n");
//     }

//     return 0;
// }

// counter za razmak i za ostale cifre (; : , .)

// int main()
// {
//     int c, razmak = 0, n = 0;
//     while ((c = getchar()) != EOF)
//     {
//         switch (c)
//         {
//         case ' ':
//             razmak++;
//             break;
//         case '.':
//         case ',':
//         case ':':
//         case ';':
//             n++;
//             break;

//         default:
//             break;
//         }
//     }
//     printf("Broj razmaka: %d\n", razmak);
//     printf("Broj ostalih znakova: %d", n);
//     return 0;
// }

/*
Sastaviti program koji broji karaktere ulaznog teksta do prve decimalne cifre.
Unos teksta se zavrsava signalom EOF.
*/
#include <ctype.h>
// int main()
// {
//     int c, brojac = 0;
//     while ((c = getchar()) != EOF)
//     {
//         if (isdigit(c))
//         {
//             break;
//         }
//         brojac++;
//     }
//     printf("Broj znakova: %d", brojac);
//     return 0;
// }

/*
Sastaviti program koji broji karaktere ulaznog teksta razlicite od decimalnih cifara.
Unos teksta se zavrsava signalom EOF.
*/

// int main()
// {
//     int c, brojac = 0;
//     while ((c = getchar()) != EOF)
//     {
//         if (isdigit(c))
//         {
//             continue;
//         }
//         brojac++;
//     }
//     printf("Broj karaktera razlicitih od decimalnih cifara: %d", brojac);
//     return 0;
// }

/*
Sastaviti program koji ispituje da li su u unetom tekstu zagrade '(' i ')' dobo uparene.
Unos teksta se zavrsava signalom EOF.
*/

// int main() -me
// {
//     int c, open = 0, closed = 0;

//     while ((c = getchar()) != EOF)
//     {
//         switch (c)
//         {
//         case '(':
//             open++;
//             break;
//         case ')':
//             closed++;
//             break;
//         default:
//             break;
//         }
//     }
//     if ((open > closed))
//     {
//         printf("Broj zagrada nije jednak, vise je otvorenih zagrada.");
//     }
//     else if (closed > open)
//     {
//         printf("Broj zagrada nije jednak, vise je zatvorenih zagrada.");
//     }
//     else
//         printf("Broj zagrada je jednak");

//     return 0;
// }

// int main()
// {
//     int c;
//     int otv = 0;
//     while ((c = getchar()) != EOF)
//     {
//         switch (c)
//         {
//         case '(':
//             otv++;
//             break;
//         case ')':
//             otv--;
//             if (otv < 0)
//             {
//                 printf("Visak zatvorenih zagrada\n");
//                 break;
//             }
//         }
//     }
//     if (otv == 0)
//         printf("Zagrade su u redu\n");
//     else
//         printf("Visak otvorenih zagrada\n");
//     return 0;
// }

/*
Sastaviti funkciju za odredjivanje maksimuma dva cela broja, a zatim sastaviti program
koji ce za uneta cetri cela broja odrediti najveci koristeci prethodnu funkciju,
zatim ispisati rezultat.
*/

// int max(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// int main()
// {
//     int a, b, c, d;
//     printf("a:");
//     scanf("%d", &a);
//     printf("b:");
//     scanf("%d", &b);
//     printf("c:");
//     scanf("%d", &c);
//     printf("d:");
//     scanf("%d", &d);
//     printf("Najveci broj je: %d", max(max(a, b), max(c, d)));
//     return 0;
// }
#define PI 3.14
// float povrsinaLopte(float a)
// {
//     return 4 * a * a * PI;
// }

// float zapreminaLopte(float a)
// {
//     return (4. / 3.) * (a * a * a) * PI;
// }

// int main()
// {
//     float r;
//     printf("unesite poluprecnik:");
//     scanf("%f", &r);
//     if (r > 0)
//     {
//         printf("Povrsina lopte je: %.2f\n", povrsinaLopte(r));
//         printf("Zapremina lopte je: %.2f", zapreminaLopte(r));
//     }
//     return 0;
// }
#include <math.h>
// float stranice(float x1, float x2, float y1, float y2)
// {
//     return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
// }

// float povrsinaTrougla(float obim, float a, float b, float c)
// {
//     return sqrt(obim * (obim - a) * (obim - b) * (obim - c));
// }

// int main()
// {
//     float x1, x2, y1, y2, x3, y3, a, b, c, S, P;
//     printf("prvo teme (Ax,Ay):");
//     scanf("%f%f", &x1, &y1);
//     printf("drugo teme (Bx, By):");
//     scanf("%f%f", &x2, &y2);
//     printf("trece teme (Cx, Cy):");
//     scanf("%f%f", &x3, &y3);

//     a = stranice(x2, x3, y2, y3);
//     b = stranice(x3, x1, y3, y1);
//     c = stranice(x1, x2, y1, y2);

//     S = (a + b + c) / 2;

//     printf("Povrsina trougla je: %.2f", povrsinaTrougla(S, a, b, c));
//     return 0;
// }

// int zbirKvadrata(int a, int b)
// {
//     int i, suma = 0;
//     for (i = a; i <= b; i++)
//     {
//         suma += i * i;
//     }
//     return suma;
// }

// int zbirParni(int a, int b)
// {
//     int i, suma = 0;
//     for (i = a; i <= b; i++)
//         if (i % 2 == 0)
//             suma += i * i;
//     return suma;
// }
// int zbirNeparni(int a, int b)
// {
//     int i, suma = 0;
//     for (i = a; i <= b; i++)
//         if (i % 2 == 1)
//             suma += i * i;
//     return suma;
// }

// int main()
// {
//     int a, b;
//     printf("a: ");
//     scanf("%d", &a);
//     printf("b: ");
//     scanf("%d", &b);

//     printf("Zbir kvadrata svih brojeva je: %d\nZbir kvadrata parnih brojeva je: %d\nZbir kvadrata neparnih brojeva je: %d", zbirKvadrata(a, b), zbirParni(a, b), zbirNeparni(a, b));

//     return 0;
// }

// int sumaCifara(int a)
// {
//     int suma = 0;
//     while (a != 0)
//     {
//         suma += a % 10;
//         a = a / 10;
//     }
//     return suma;
// }

// int main()
// {
//     int i, a, b;

//     printf("a:");
//     scanf("%d", &a);
//     printf("b:");
//     scanf("%d", &b);

//     for (i = a; i <= b; i++)
//     {
//         printf("%d\t%d\n", i, sumaCifara(i));
//     }

//     return 0;
// }