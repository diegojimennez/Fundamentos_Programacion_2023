#include <stdio.h>
#include <math.h>

int main()
{
    double hipo, cata, catb;

    printf("Dime cuanto vale la hipotenusa: ");
    scanf("%lf", &hipo);

    printf("Dame el valor de un cateto: ");
    scanf("%lf", &cata);

    if (cata > hipo)
    {
        printf("ERROR. El cateto no puede ser mayor que la hipotenusa.\n");
    }
    else
    {
        catb = sqrt(hipo * hipo - cata * cata);
        printf("El valor del otro cateto es de: %.2lf\n", catb);
    }

    return 0;
}