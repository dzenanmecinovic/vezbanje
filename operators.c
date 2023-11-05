#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logicki operatori

    float temperatura = 25;
    bool sunny = false;

    if (temperatura >= 0 && temperatura <= 30 && sunny)
    {
        printf("The weather is good!");
    }
    else
    {
        printf("The weather is bad!");
    }
    return 0;
}