#include <stdio.h>

int main()
{

    char carac;
    int h, a;

    printf("Dame un caracter para dibujar: ");
    scanf(" %c", &carac);

    printf("Dame el alto del marco: ");
    scanf("%d", &h);

    printf("Dame el ancho del marco: ");
    scanf("%d", &a);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 or i == h - 1 or j == 0 or j == a - 1)
            {
                printf("%c", carac);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}