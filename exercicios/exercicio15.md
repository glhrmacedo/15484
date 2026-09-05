Qual será a saída do programa abaixo?

```c
    # include <stdio.h>

    float funcaol (int a, int b);
    float funcao2 (int a, float b);

    int main()
    {
        int a, b;
        float c, d;
        a = 9;
        b = 4;
        printf("a = %d b = %d\n", a, b);
        c = funcaol(a, b);
        printf("a = %d b = %d c = %.2f\n", a, b, c);
        d = funcao2(a, b);
        printf("a = %d b = %d c = %.2f d = %.2f\n", a, b, c, d);
        b = 6;
        c = funcaol(b, a);
        d = funcao2(b, c);
        printf("b = %d c = %.2f d = %.2f\n", b, c, d);
        return 0;
    }

    float funcaol (int a, int b)
    {
        int c;
        float d, e;
        c = (a + b) / 2;
        d = (a + b) / 2;
        e = (a + b) / 2.0;
        printf("c = %d d = %.2f e = %.2f\n", c, d, e);
        return e;
    }

    float funcao2 (int a, float b)
    {
        int c;
        float d;
        c = (int)(b * 2);
        d = (a + c) / 4;
        printf("c = %d d = %.2f\n", c, d);
        d = (a + c) / 4.0;
        return d;
    }
```