#include <stdio.h>
#include <stdbool.h>

double square(double x)
{

    return x * x;
}

int main()
{
    // return - vraca vrednost pozivajuce funkcije
    double x = square(3.14);
    printf("%lf", x);

    return 0;
}