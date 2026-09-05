Qual será a saída do programa abaixo?

```c
    # include <stdio.h>

    void funcaol (int a, int b)
    {
        double c, d;
        a = 2 * a + 1;
        d = a;
        d = d / 2;
        c = a / 2;
        b = c + d;
        printf("a = %d b = %d c = %.2f d = %.2f\n", a, b, c, d);
    }

    double funcao2 (double a, int b)
    {
        double c;
        c = a + b;
        a = c / 2 - 1;
        b = a + b;
        printf("a = %.2f b = %d c = %.2f\n", a, b, c);
        return c;
    }

    int main()
    {
        int a, b, c;
        double d;
        a = 6;
        b = a % 4 + 1;
        c = 9 - a % b;
        printf("a = %d b = %d c = %d\n", a, b, c);
        funcaol(b, c);
        printf("a = %d b = %d c = %d\n", a, b, c);
        d = funcao2(b, c);
        printf("b = %d c = %d d = %.2f\n", b, c, d);
        c = funcao2(d, b);
        printf("b = %d c = %d d = %.2f\n", b, c, d);
        return 0;
    }
```