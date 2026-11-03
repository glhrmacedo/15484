#include <stdio.h>
#include <stdlib.h>

void trocar(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

void ordenar(int v[], int n)
{
    for (int i = 1; i < n; i++)
        for (int j = i; j > 0 && v[j] < v[j - 1]; j--)
            trocar(&v[j], &v[j - 1]);
}

int busca(int v[], int n, int k)
{
    int e = -1, d = n;
    while (e < d - 1)
    {
        int m = e + (d - e) / 2;
        if (v[m] < k)
            e = m;
        else
            d = m;
    }
    return d;
}

void imprimir(int v[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Uso: %s k v0 v1 ... vn-1\n", argv[0]);
        return EXIT_FAILURE;
    }

    int k = atoi(argv[1]);
    int v[argc - 2];
    int n = sizeof v / sizeof v[0];

    for (int i = 0; i < n; i++)
        v[i] = atoi(argv[i + 2]);

    ordenar(v, n);
    imprimir(v, n);

    int j = busca(v, n, k);

    if (j < n && v[j] == k)
        printf("O valor %d foi encontrado na posição %d.\n", k, j);
    else
        printf("O valor %d não foi encontrado.\n", k);

    return EXIT_SUCCESS;
}
