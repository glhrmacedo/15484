# include <stdio.h>

# define PI 3.14156

int main()
{
    float raio;
    printf("Entre com o raio do círculo: ");
    scanf("%f", &raio);
    printf("O perímetro do círculo é %2.f", 2 * PI * raio);
    printf("A área do círculo é %.2f\n", PI * raio * raio);
    return 0;
}