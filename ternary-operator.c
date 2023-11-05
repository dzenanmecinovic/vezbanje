#include <stdio.h>
#include <stdbool.h>

int findMax(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int max = findMax(52, 120);

    printf("%d", max);
}