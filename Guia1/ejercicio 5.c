#include <stdio.h>

int main()
{
	char nombre_dino;
	float peso, longitud, libras, pies;
	
	printf ("Ingrese nombre del dinosaurio: ");
	scanf ("%s", &nombre_dino);
	printf ("Ingrese libras: ");
	scanf ("%f", &libras);
	printf ("Ingrese pies: ");
	scanf ("%f", &pies);
	peso= (libras * 0.45);
	longitud= (pies * 0.3048);
	printf ("Peso: %.2f\n", peso);
	printf ("Longitud: %.4f", longitud);
	
	return 0;
}

