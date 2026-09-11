Qual será a saída exibida durante a execução do programa abaixo?

```c
    int main()
    {
        int p = 1, r = 81, n = r;

        while (p + 1 < r)
        {
            q = (p + r) / 2;

            if (pow(q, 2) <= n)
                p = q;
            else
                r = q;
        }

        printf("%d", p);
        return 0;
    }
```