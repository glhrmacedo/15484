# include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Os números %d e %d possuem paridades distintas? %d\n", a, b, (a + b) % 2 != 0);
    return 0;
}