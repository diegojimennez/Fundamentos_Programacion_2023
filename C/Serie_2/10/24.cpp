#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero_usuario, numero_sistema;

    printf("Introduce un número: ");
    scanf("%d", &numero_usuario);

    srand(time(0));
    numero_sistema = rand() % 100;

    if (numero_usuario == numero_sistema)
    {
        printf("¡Felicidades! Tu número es igual al número generado por el sistema.\n");
    }
    else
    {
        printf("Lo siento, tu número no es igual al número generado por el sistema. El número del sistema era %d.\n", numero_sistema);
    }

    return 0;
}