#include <stdio.h>

main ()
{
  float x, y;
  float suma;
  float resta;
  float multiplicacion;
  float division;
  printf ("Dame un numero: ");
  scanf ("%f", &x);
  printf ("Dame otro numero: ");
  scanf ("%f", &y);
  suma = x + y;
  resta = x - y;
  multiplicacion = x * y;
  division = x / y;

  printf ("La suma de %.2f mas %.2f es %.2f.\n", x, y, suma);
  printf ("La resta de %.2f menos %.2f es %.2f.\n", x, y, resta);
  printf ("La multiplicacion de %.2f por %.2f es %.2f.\n", x, y,
	  multiplicacion);
  printf ("La division de %.2f entre %.2f es %.2f.\n", x, y, division);

}

