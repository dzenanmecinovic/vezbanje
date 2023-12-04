#include <stdio.h>

// int zbir(int a, int b)
// {
//     int rezultat;
//     rezultat = a + b;
//     return rezultat;
// }

// int main()
// {
//     int c = zbir(5, 3); // poziv funkcije
//     printf("\n%d\n", c);
//     return 0;
// }

// 2 nacin.

// int zbir(int a, int b)
// {
//     return (a + b);
// }

// int main()
// {
//     // poziv funkcije
//     printf("\n%d\n", zbir(5, 3));
//     return 0;
// }

// int main()
// {
//     char ch;
//     printf("Unesi karakter: ");
//     ch = getchar();
//     printf("Uneti karakter je ");
//     putchar(ch);
// }

// int main()
// {
//     char pitanje[35];
//     printf("Kako se zovete?");
//     gets(pitanje);
//     printf("Pozdrav, %s!", pitanje);
//     // puts(pitanje);
// }

// int main()
// {
//     putchar('\n');
//     putchar('a'); //        a
//     putchar('\n');
//     putchar(77); //         M
//     putchar('\n');
//     putchar('A' + 10); //   K
//     putchar('\n');
//     putchar('a' + 3); //    d
//     return 0;
// }

/*
sastaviti program koji :
 a) cita sa tastature jedan znak i ispisuje ga na ekranu,
 b) cita sa tastature neogranicen broj karaktera sve dok se ne ucita greska i ispisuje unete karaktere na ekranu.
*/

// int main()
// { // a)

// char ch;
// printf("input: ");
// ch = getchar();
// printf("output: ");
// putchar(ch);

// b)

// int c;
// while (c != EOF)
// {
//     c = getchar();
//     putchar(c);
// }

// return 0;
// }

/* sastaviti progrma za:
a) unos teksta sa tastature sve dok se ne unese tacka i prikazuje broj karaktera do tacke.
b) unos teksta sa tastature sve dok se ne ucite EOF i prikazuje ukupan broj karaktera.
*/

int main()
{
    // a)
    // int c, counter = 0;
    // c = getchar();
    // while (c != '.')
    // {
    //     c = getchar();
    //     counter++;
    // }
    // printf("Broj karaktera (ne racunajuci razmake) pre tacke %d\n", counter);

    // b)

    int c, n = 0;
    while ((c = getchar()) != EOF)
    {
        n++;
    }
    printf("Broj karaktera: %d.\n", n);

    return 0;
}