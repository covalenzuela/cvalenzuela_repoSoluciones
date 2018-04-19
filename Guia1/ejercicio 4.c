/**
 * ejercicio 4.c
 * Algoritmo para calcular el perimetro y superficie de un rectangulo
 */


#include <stdio.h>

int main()
{
	float base, altura, perimetro, superficie;
	
	printf ("Ingrese la base: ");
	scanf ("%f", &base);
	printf ("Ingrese la altura: ");
	scanf ("%f", &altura);
	superficie= base*altura;
	perimetro= 2*(base + altura);
	printf ("La superficie es: %f \n", superficie);
	printf ("EL perimetro es: %f", perimetro);
	
	return 0;
}

