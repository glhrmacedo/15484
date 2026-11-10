# include <stdio.h>
# include <stdlib.h>

void imprimir(char tabuleiro[3][3])
{
    system("clear");
    printf(" %c | %c | %c \n", tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
    printf("---+---+---   \n");
    printf(" %c | %c | %c \n", tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
    printf("---+---+---   \n");
    printf(" %c | %c | %c \n", tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
}

int main()
{
    char tabuleiro[3][3], jogador;

    int linha, coluna, rodada, ganhou;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';

    imprimir(tabuleiro);

    ganhou = 0;

    for (rodada = 0; rodada < 9 && ganhou == 0; rodada++)
    {
        if (rodada % 2 == 1)
            jogador = 'X';
        else
            jogador = 'O';

        do
        {
            printf("\nEntre com a sua jogada: ");
            scanf("%i %i", &linha, &coluna);
        }
        while (linha < 1 || linha  > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha - 1][coluna - 1] != ' ');

        tabuleiro[linha - 1][coluna - 1] = jogador;

        imprimir(tabuleiro);

        if (tabuleiro[linha - 1][0] == tabuleiro[linha - 1][1] && tabuleiro[linha - 1][1] == tabuleiro[linha - 1][2])
        {
            ganhou = 1;
        }
        else
        {
            if (tabuleiro[0][coluna - 1] == tabuleiro[1][coluna - 1] && tabuleiro[1][coluna - 1] == tabuleiro[2][coluna - 1])
            {
                ganhou = 1;
            }
            else
            {
                if (linha == coluna && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
                {
                    ganhou = 1;
                }
                else
                {
                    if (linha + coluna == 4 && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
                    {
                        ganhou = 1;
                    }
                }
            }
        }
    }

    if (ganhou == 0)
    {
        printf("\nDeu velha!\n");
    }
    else
    {
        printf("\nO jogador '%c' ganhou!\n", jogador);
    }
    return 0;
}
