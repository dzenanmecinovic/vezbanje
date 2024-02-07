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

    // int i, j, n, suma = 0, matrica[MAX][MAX];
    // printf("n = ");
    // scanf("%d", &n);
    // printf("elementi: ");
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         scanf("%d", &matrica[i][j]);
    //     }
    // }
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         suma += matrica[i][j];
    //     }
    // }
    // printf("\nsuma = %d", suma);

    // int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};

    // int array[2][4] = {{3, 6, 9, 12}, {2, 4, 6, 8}};
    // printf("%d ", array[1][3]);

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; i++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // sabiranje dveju matrica

    // int i, j, m, n, prvaMat[MAX][MAX], drugaMat[MAX][MAX];

    // printf("vrste: ");
    // scanf("%d", &m);
    // printf("kolone: ");
    // scanf("%d", &n);
    // printf("\nElementi prve matrice: \n");
    // for (i = 0; i < m; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         scanf("%d", &prvaMat[i][j]);
    //     }
    // }
    // printf("\nElementi druge matrice: \n");
    // for (i = 0; i < m; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         scanf("%d", &drugaMat[i][j]);
    //     }
    // }
    // printf("\nZbir matrica je: \n");
    // for (i = 0; i < m; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%d ", prvaMat[i][j] + drugaMat[i][j]);
    //     }
    //     printf("\n");
    // }

    // scanf matricu n*n, print matrice u obliku \t, print sve el na glavnoj i sporednoj dijagonali,
    // print sume elemenata na glavnoj i sporednoj dijagonali. elementi matrice su INT.

    // int i, j, n, sgd = 0, ssd = 0, mat[MAX][MAX];

    // printf("broj vrsta i kolona: ");
    // scanf("%d", &n);
    // printf("elementi: \n");
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("element[%d][%d] = ", i, j);
    //         scanf("%d", &mat[i][j]);
    //     }
    // }
    // printf("uneta matrica: \n");
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf(" %d", mat[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\nElementi glavne dijagonale: ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", mat[i][i]);
    //     sgd += mat[i][i];
    // }
    // printf("\nSuma glavne dijagonale = %d", sgd);
    // printf("\nElementi sporedne dijagonale: ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", mat[i][n - i - 1]);
    //     ssd += mat[i][n - i - 1];
    // }
    // printf("\nSuma sporedne dijagonale = %d", ssd);

    int i, j, n, sum = 0, mat[MAX][MAX];

    printf("n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrica: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("suma elemenata vrste: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += mat[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}