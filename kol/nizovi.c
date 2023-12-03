#include <stdio.h>

int sum(int numOne, int numTwo)
{
    return numOne + numTwo;
}

int main()
{
    int add = sum(5, 30);
    printf("Suma je: %d", add);
    // int a, b, c;
    // float d;
    // printf("input: ");
    // scanf("%d%d%d%f", &a, &b, &c, &d);
    // printf("Prvi %d, drugi %d, treci %d, cetvrti %f", a, b, c, d);

    return 0;
}