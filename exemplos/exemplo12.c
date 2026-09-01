#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta;

    printf("Escreva os coeficientes a, b e c da equação do segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (a == 0)
    {
        printf("A equação não é do segundo grau, pois o coeficiente 'a' é zero.\n");
    }
    else if (delta < 0)
    {
        printf("A equação do segundo grau não possui raízes reais.\n");
    }
    else if (delta > 0)
    {
        printf("A equação do segundo grau possui duas raízes reais distintas.\n");
    }
    else
    {
        printf("A equação do segundo grau possui uma raiz real.\n");
    }

    return EXIT_SUCCESS;
}