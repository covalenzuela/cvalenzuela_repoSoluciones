/**
 * ejercicio 3.c
 * Algoritmo para calcular la hipotenusa de un triangulo rectangulo al cuadrado
 */


#include <stdio.h>

int main()
{
	float cateto1, cateto2, hipotenusa;
	
	printf ("Ingrese cateto 1: ");
	scanf ("%f", &cateto1);
	printf ("Ingese cateto 2: ");
	scanf ("%f", &cateto2);
	hipotenusa= (cateto1*cateto1) + (cateto2*cateto2);
	printf ("La hipotenusa al cuadrado es: %f", hipotenusa);
	
	return 0;
}

