Qual será a saída exibida durante a execução do programa abaixo?

```c
    int main()
    {
        int x = 9, y = 0;

        do
        {
            y = (x % 2) + 10 * y;
            x = x / 2;
            printf("x = %i y = %i\n", x, y);
        }
        while (x != 0);

        while (y != 0)
        {
            x = y % 100;
            y = y / 10;
            printf("x = %i y = %i\n", x, y);
        }

        return 0;
    }
```