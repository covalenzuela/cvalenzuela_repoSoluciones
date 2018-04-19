/**
 * ejercicio 2.c
 * Algoritmo para calcular el cuadrado y cubo de un numero entero positivo 
 */


#include <stdio.h>

int main()
{
	int numero, cuadrado, cubo;
	
	printf ("Ingrese número: ");
	scanf ("%d", &numero);
	cuadrado= numero*numero;
	cubo= numero*numero*numero;
	printf ("El cuadrado del número es: %d\n", cuadrado);
	printf ("EL cubo del número es: %d", cubo);
	
	return 0;
}

