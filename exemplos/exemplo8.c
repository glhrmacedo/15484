# include <stdio.h>
# include <stdlib.h>

int adicao(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
int divisao(int a, int b);
int resto(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("a = %p\n", &a);
    printf("a = %p\n", &b);
    printf("a + b = %d\n", adicao(a, b));
    printf("a - b = %d\n", subtracao(a, b));
    printf("a * b = %d\n", multiplicacao(a, b));
    printf("a / b = %d\n", divisao(a, b));
    printf("a %% b = %d\n", resto(a, b));
    return EXIT_SUCCESS;
}

int adicao(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

int divisao(int a, int b)
{
    return a / b;
}

int resto(int a, int b)
{
    return a * b;
}