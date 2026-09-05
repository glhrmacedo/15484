Qual será a saída do programa abaixo?

```c
    # include <stdio.h>

    int funcaol (int a, int b)
    {
        int c;
        a = b - a;
        b = a + b;
        c = a + b;
        printf("a = %d b = %d c = %d\n", a, b, c);
        return c;
    }

    int main()
    {
        int a, b, c, d, e;
        a = 6;
        b = a + 7;
        c = 4;
        d = 9;
        printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
        e = funcaol(c, d);
        printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
        e = funcaol(a, b);
        printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
        c = funcaol(e, d);
        printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
        return 0;
    }    
```