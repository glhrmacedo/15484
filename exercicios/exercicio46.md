Qual será a saída exibida durante a execução do programa abaixo?
 
```c
void funcao(int v[], int n, int *k)
{
    *k = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] % 2 == 0 && (*k) < v[i])
            *k = v[i];
}
 
int main()
{
    int v[] = {14, 7, 8, 51, 13, 20, 2}, k;
    funcao(v, 7, &k);
    printf("k = %i", k);
    return 0;
}
```
