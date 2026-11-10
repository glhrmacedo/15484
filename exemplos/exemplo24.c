#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0
#define MAX   10

int emagica(int A[MAX][MAX], int n)
{
    int i, j;
    int soma1, soma2;
    int diagonal1 = 0, diagonal2 = 0;

    for (i = 0; i < n; i++)
    {
        diagonal1 = diagonal1 + A[i][i];
        diagonal2 = diagonal2 + A[i][n - 1 - i];
    }

    if (diagonal1 != diagonal2)
        return FALSE;

    for (i = 0; i < n; i++)
    {
        soma1 = 0;
        for (j = 0; j < n; j++)
            soma1 = soma1 + A[i][j];
        if (soma1 != diagonal1)
            return FALSE;
    }

    for (j = 0; j < n; j++)
    {
        soma2 = 0;
        for (i = 0; i < n; i++)
            soma2 = soma2 + A[i][j];
        if (soma2 != diagonal1)
            return FALSE;
    }

    return TRUE;
}

int main()
{
    int n, i, j;
    int A[MAX][MAX];

    do
    {
        printf("Entre com a dimensão da matriz de 1 a %d: ", MAX);
        scanf("%d", &n);
        if (n < 1 || n > MAX)
            printf("A dimensão da matriz é inválida. Por favor, tente novamente!\n");
    }
    while (n < 1 || n > MAX);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Entre com um número inteiro qualquer: ");
            scanf("%d", &A[i][j]);
        }

    if (emagica(A, n))
        printf("A matriz é mágica!\n");
    else
        printf("A matriz não é mágica!\n");

    return EXIT_SUCCESS;
}
