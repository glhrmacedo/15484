Qual será a saída exibida durante a execução do programa abaixo?

```c
    int funcao(int a, int b);

    int main()
    {
        int i = 1, j = 1, k = 9;

        if (k % 2 == 0)
            k = 2;
        else
            k = 3;

        printf("%i\n", funcao(2, 4));

        while (i < 3)
        {
            while (j < 3)
            {
                printf("%i\n", funcao(k, i + j));
                j = j + 1;
            }

            i = i + 1;
        }

        return 0;
    }

    int funcao(int a, int b)
    {
        int i = 0, k = 1;

        while (i <= b)
        {
            k = k * a;
            i = i + 1;
        }

        return i + k;
    }
```