#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, next, first = 0, second = 1;

    printf("Unesite broj do kojeg zelite Fibonaccijev niz:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;

        printf("%d ", next);
    }

    return 0;
}

// PRVI je DRUGI, a DRUGI je DOBIJENI