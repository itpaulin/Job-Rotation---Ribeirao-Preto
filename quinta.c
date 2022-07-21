
#include <stdio.h>
#include <string.h>

char *inverteString(char *txt)
{
    int tamanho = strlen(txt);
    int c, i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        c = txt[i];
        txt[i] = txt[j];
        txt[j] = c;
    }

    return txt;
}

main()
{
    char txt[] = "adiv";
    printf("%s\n", inverteString(txt));
}
