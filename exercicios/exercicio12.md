Qual será a saída do programa abaixo?

```c
    # include <stdio.h>

    int funcaol (int a)
    {
        a = a % 10;
        return a;
    }

    int funcao2 (int a, int b)
    {
        int c;
        c = a * b;
        a = a % b;
        return c + a;
    }

    int main()
    {
        int a, b, c, d;
        a = 4728;
        b = funcaol(a);
        printf("a = %d b = %d\n", a, b);
        c = 3 * b + 7 % 4;
        d = (3 * b + 7) % 4;
        printf("c = %d d = %d\n", c, d);
        c = a / 25 * 25;
        d = a * 25 / 25;
        printf("c = %d d = %d\n", c, d);
        a = funcao2(a, 60);
        b = funcaol(a);
        printf("a = %d b = %d\n", a, b);
        c = a / b % 3;
        d = a % b / 3;
        printf("c = %d d = %d\n", c, d);
        return 0;
    }    
```