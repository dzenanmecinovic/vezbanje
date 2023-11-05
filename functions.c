#include <stdio.h>

void birthday(char x[], int y)
{
    printf("\nHappy birthday %s!", x);
    printf("\nYou are %d years old!", y);
}

int main()
{

    char name[] = "Dzenan";
    int age = 19;

    birthday(name, age);

    return 0;
}