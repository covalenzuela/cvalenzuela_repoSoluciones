/**
 * ejercicio 10.c
 * Algoritmo compañía de autobuses "Camino al cielo":
 * costo de un boleto de viaje basdo en los kilometros por recorrer y el costo por kilometro
 */


#include <stdio.h>

int main()
{
	int kilometros, costo_kilometro, boleto;
	
	printf ("Cantidad de kilometros: ");
	scanf ("%d", &kilometros);
	printf ("Costo por kilometro: ");
	scanf ("%d", &costo_kilometro);
	boleto= (kilometros*costo_kilometro);
	printf ("Precio boleto: %d\n", boleto);
	
	return 0;
}

