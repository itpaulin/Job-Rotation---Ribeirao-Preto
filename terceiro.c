#include <stdio.h>
#include <stdlib.h>

main()
{
    int a, b, ba, c, ca = 2, cb = -1, d, da = 12, e, ea = 0, eb = 1, f;
    int i;

    a = 1;
    printf("A)");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", a);
        a = a + 2;
    }

    b = 2;
    printf("\nB)");
    for (i = 0; i < 7; i++)
    {
        printf("%d, ", b);
        ba = b;
        b = b + ba;
    }

    c = 0;
    printf("\nC)");
    for (i = 0; i < 8; i++)
    {
        printf("%d, ", c);
        c = c + ca + cb;
        ca++;
        cb++;
    }

    d = 4;
    printf("\nD)");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", d);
        d = d + da;
        da = da + 8;
    }
    e = ea + eb;
    printf("\nE) 1, ");
    for (i = 0; i < 6; i++)
    {
        printf("%d, ", e);
        ea = eb;
        eb = e;
        e = ea + eb;
    }

    printf("\nF) 2, 10, 12, 16, 17, 18, 19, 200");
}
