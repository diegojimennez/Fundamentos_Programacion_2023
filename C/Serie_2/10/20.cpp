#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int apuesta;
    int res;

    printf("¿Que cantidad deseas aportar?\n");
    scanf("%d", &apuesta);

    srand(time(0));
    res = rand() % 2;

    if (res == 0)
    {
        printf("¡FELICIDADES!\nHas ganado el doble de tu apuesta. Tu nuevo total es %d.\n", apuesta * 2);
    }
    else
    {
        printf("Lo siento, has perdido tu apuesta.\n");
    }

    return 0;
}