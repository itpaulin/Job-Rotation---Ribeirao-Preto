#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int confereFibonacci(int x)
{
    int j = 0, k = 1, y = j + k;
    while (y < x)
    {
        j = k;
        k = y;
        y = k + j;
    }
    if (x == y)
        return 1;
    else
        return 0;
}

main()
{
    int x, teste;
    printf("Escreva um numero para conferir se pertence a Fibonacci:  ");
    scanf("%d", &x);
    teste = confereFibonacci(x);
    teste ? printf("Pertence!") : printf("Nao pertence!");
}