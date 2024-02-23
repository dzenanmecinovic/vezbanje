#include <stdio.h>

int main()
{

    int a;
    printf(" A (1-3): ");
    scanf("%d", &a);
    if (a < 1 || a > 3)
    {
        printf("1-3 !");
    }

    switch (a)
    {
    case 1:
        printf("Broj je 1\n");
        break;
    case 2:
        printf("Broj je 2\n");
        break;
    default:
        printf("Nepoznat broj\n");
    }

    return 0;
}