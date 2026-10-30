Qual será a saída exibida durante a execução do programa abaixo?
 
```c
void funcao(int v[], int n, int i)
{
    v[1] = 17;
    v[i / 2] = 9;
    v[2 * i - 1] = 95;
    v[i - 1] = v[5] / 2;
    v[3] = v[i];
    v[i + 1] = v[i] + v[i - 1];
    v[v[2] - 2] = 78;
    v[v[i] - 1] = v[1] * v[i] / 5;
    v[v[2] % 2 + 2] = v[i + 6 / 2] - v[i - 1 * 2];
}
 
int main()
{
    int v[] = {83, 41, 5, 1, 59, 97};
    funcao(v, 6, 2);
    for (int i = 0; i < 6; i++)
        printf("%i ", v[i]);
    return 0;
}
```
