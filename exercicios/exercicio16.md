Qual será a saída do programa abaixo?

```c
    # include <stdio.h>

    double funcaol (int a, int b)
    {
        double c, d;
        c = (double) a / b;
        d = (double) (a / b);
        printf("a = %d b = %d c = %.2f d = %.2f\n", a, b, c, d);
        return c - d;
    }

    int funcao2 (double a, double b)
    {
        int c, d;
        c = (int) a + (int) b;
        d = (int) (a + b);
        printf("a = %.2f b = %.2f c = %d d = %d\n", a, b, c, d);
        return d - c;
    }

    int main()
    {
        int a, b, c;
        double d, e;
        a = 11;
        b = 4;
        printf("a = %d b = %d\n", a, b);
        d = funcaol(a, b);
        printf("a = %d b = %d d = %.2f\n", a, b, d);
        d = 4.8;
        e = -1.3;
        a = d;
        b = e;
        printf("a = %d b = %d d = %.2f e = %.2f\n", a, b, d, e);
        d = 3.5;
        e = 2.8;
        c = funcao2(d, e);
        printf("c = %d d = %.2f e = %.2f\n", c, d, e);
        d = -1.5;
        e = -2.8;
        c = funcao2(d, e);
        printf("c = %d d = %.2f e = %.2f\n", c, d, e);
        d = c;
        e = c / 2;
        printf("c = %d d = %.2f e = %.2f\n", c, d, e);
        return 0;
    }
```