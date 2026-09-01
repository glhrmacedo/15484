#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Escreva os comprimentos dos lados a, b e c do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (!(a + b > c && a + c > b && b + c > a))
    {
        printf("Os comprimentos escritos não formam um triângulo.\n");
    }
    else if (a == b && b == c)
    {
        printf("O triângulo é equilátero.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("O triângulo é isósceles.\n");
    }
    else
    {
        printf("O triângulo é escaleno.\n");
    }

    return EXIT_SUCCESS;
}