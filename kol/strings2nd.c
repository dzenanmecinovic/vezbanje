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
