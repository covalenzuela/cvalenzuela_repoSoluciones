/**
 * ejercicio 7.c
 * Algoritmo para tranformar dias a segundos
 */


#include <stdio.h>

int main()
{
	int dias, calculo;
	
	printf ("Número de días: ");
	scanf ("%d", &dias);
	calculo= (((dias*24)*60)*60);
	printf ("Tiempo en segundos: %d", calculo);
	
	return 0;
}

