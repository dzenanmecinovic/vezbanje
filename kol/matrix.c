#include <stdio.h>
#include <math.h>
#define MAX 100

int main()
{

    // int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};

    // int vrsta, kolona, i, j, matrica[MAX][MAX];
    // printf("Broj vrsta: ");
    // scanf("%d", &vrsta);
    // printf("Broj kolona: ");
    // scanf("%d", &kolona);
    // for (i = 0; i < vrsta; i++)
    // {
    //     for (j = 0; j < kolona; j++)
    //     {
    //         printf("[%d vrsta][%d kolona]", i, j);
    //         scanf("%d", &matrica[i][j]);
    //     }
    // }

    // printf("Uneta matrica je: \n");
    // for (i = 0; i < vrsta; i++)
    // {
    //     for (j = 0; j < kolona; j++)
    //     {
    //         printf("%d ", matrica[i][j]);
    //     }
    //     printf("\n");
    // }

    // suma elemenata matrice n*n

    int i, j, n, suma = 0, matrica[MAX][MAX];
    printf("n = ");
    scanf("%d", &n);
    printf("elementi: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            suma += matrica[i][j];
        }
    }
    printf("\nsuma = %d", suma);

    return 0;
}