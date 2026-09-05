Qual será a saída do programa abaixo?

```c
    # include <stdio.h>

    double funcaol (int a);
    int funcao2 (double a);

    int main()
    {
        int a, b;
        double c;
        a = 19;
        b = 5;
        c = 11.5;
        printf("a = %d b = %d c = %.2f\n", a, b, c);
        c = funcaol(a);
        printf("a = %d b = %d c = %.2f\n", a, b, c);
        b = funcao2(c);
        a = b + 6;
        printf("a = %d b = %d c = %.2f\n", a, b, c);
        c = funcaol(a);
        printf("a = %d b = %d c = %.2f\n", a, b, c);
        return 0;
    }

    double funcaol (int a)
    {
        a = a / 2;
        printf("a = %d\n", a);
        return (double) a / 2;
    }

    int funcao2 (double a)
    {
        a = a / 2;
        printf("a = %.2f\n", a);
        return (int) a;
    }
```