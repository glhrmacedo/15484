# include <stdio.h>
# include <stdlib.h>

int maximo(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("O maior valor entre %d e %d é %d.\n", a, b, maximo(a, b));
    return EXIT_SUCCESS;
}