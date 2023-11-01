#include <stdio.h>
#include <string.h>

int main() {
    char ime[25]; // bajtovi
    int godine;

    printf("\nUnesite ime: ");
    fgets(ime, 25, stdin);
    ime[strlen(ime)-1] = '\0';

    printf("\nKoliko godina imate? ");
    scanf("%d", &godine);

    printf("\n\nPozdrav %s, hahahaha.", ime);
    printf("\nImas %d godina.", godine);
    return 0;
    }