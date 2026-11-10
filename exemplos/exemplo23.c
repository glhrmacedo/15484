# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void espera(float segundos)
{
    clock_t agora, limite;

    // verifica o horário no momento da execução e o armazena em 'agora'
    agora = clock();

    // calcula o horário depois de 'segundos', a partir do valor de 'agora', e armazena em limite
    limite = agora + segundos * CLOCKS_PER_SEC;

    // enquanto não chega no horário 'limite', continue verificando qual o horário 'agora'
    while (limite > agora)
    {
        agora = clock();
    }
}

// função que recebe como parâmetro uma matriz "pista" e a imprime.
void imprime(char pista[3][30])
{
    system("clear");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            printf("%c", pista[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A, B, C, i, j, sorteio;
    char pista[3][30];

    // inicializa o sorteio com o horário atual, para que cada corrida seja diferente
    srand(time(NULL));

    // define a casa em as letras começam a corrida
    A = 0;
    B = 0;
    C = 0;

    // prenche a 'pista' com os valores iniciais: as letras na primeira casa
    pista[0][A] = 'A';
    pista[1][B] = 'B';
    pista[2][C] = 'C';

    for (i = 0; i < 3; i++)
        for (j = 1; j < 30; j++)
            pista[i][j] = 'o';

    // imprime a pista de corrida
    imprime(pista);

    while (A < 29 && B < 29 && C < 29)
    {
        // sorteia um número inteiro entre 1 e 100
        sorteio = rand() % 100 + 1;

        if (sorteio < 50)
        {
            pista[0][A] = 'o';
            A = A + 1;
            pista[0][A] = 'A';
        }

        // sorteia um número inteiro entre 1 e 100
        sorteio = rand() % 100 + 1;

        if (sorteio < 50)
        {
            pista[1][B] = 'o';
            B = B + 1;
            pista[1][B] = 'B';
        }

        // sorteia um número inteiro entre 1 e 100
        sorteio = rand() % 100 + 1;

        if (sorteio < 50)
        {
            pista[2][C] = 'o';
            C = C + 1;
            pista[2][C] = 'C';
        }

        // depois de todas letras andarem - ou não -, espera-se 0.5 segundos e imprime a pista atualizada
        espera(0.5);
        imprime(pista);
    }

    // primeiro verifica os empates (mais de uma letra chegou ao fim na mesma rodada);
    // se não houve empate, anuncia o vencedor
    if (A == 29 && B == 29 && C == 29)
        printf("Deu empate entre A, B e C!\n");
    else if (A == 29 && B == 29)
        printf("Deu empate entre A e B!\n");
    else if (A == 29 && C == 29)
        printf("Deu empate entre A e C!\n");
    else if (B == 29 && C == 29)
        printf("Deu empate entre B e C!\n");
    else if (A == 29)
        printf("Parabéns, A, você ganhou!\n");
    else if (B == 29)
        printf("Parabéns, B, você ganhou!\n");
    else if (C == 29)
        printf("Parabéns, C, você ganhou!\n");

    return 0;
}
