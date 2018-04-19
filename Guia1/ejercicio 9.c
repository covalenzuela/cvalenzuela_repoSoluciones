/**
 * ejercicio 9.c 
 * Algoritmo para calcular el dinero que recibe un vendedor a fin de mes basado en su sueldo bruto y un porcentaje extra como comision por sus ventas
 */


#include <stdio.h>

int main()
{
	int ventas, comision, sueldo_bruto, sueldo_total;
	
	printf ("Sueldo base: ");
	scanf ("%d", &sueldo_bruto);
	printf ("Saldo de ventas: ");
	scanf ("%d", &ventas);
	comision= ((ventas*7)/100);
	sueldo_total= (sueldo_bruto + comision);
	printf ("Dinero Comisión: %d\n", comision);
	printf ("Sueldo total: %d\n", sueldo_total);
	
	return 0;
}

