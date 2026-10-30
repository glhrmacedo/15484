A função abaixo recebe um vetor `v` de `n` números inteiros e o rearranja de modo que seus elementos, ao final, estejam ordenados de forma crescente. Contudo, esta função possui alguns erros de lógica. Encontre-os e corrija-os.
 
```c
int ordenar(int v[], int n)
{
    int i, j, chave;
 
    for (i = 1; i < n; i++)
    {
        chave = v[i];
        j = i - 1;
 
        while (j >= 0 && v[j] < chave)
        {
            v[j - 1] = v[j];
            j = j - 1;
        }
 
        v[j + 1] = chave;
    }
}
```
