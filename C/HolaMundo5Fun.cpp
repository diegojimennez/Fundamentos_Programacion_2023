#include <stdio.h>

void HolaMundo(int veces)
{
    for (int i = 0; i < veces; i++)
    {
        printf("Hola Mundo\n");
    }
}

int main()
{

    HolaMundo(5);

    return 0;
}