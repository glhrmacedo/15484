# include <stdio.h>
# include <math.h>

int main()
{
    double cateto1, cateto2;
    printf("Entre com os catetos do triângulo retângulo: ");
    scanf("%lf %lf", &cateto1, cateto2);
    printf("A hipotenusa do triângulo retângulo é %lf", sqrt(pow(cateto1, 2) + pow(cateto2, 2)));
    return 0;
}