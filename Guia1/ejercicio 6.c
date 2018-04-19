/**
 * ejercicio 6.c
 * Algoritmo gasolinera donde calcula el total de la compra a partir de los litros por galon
 */
 
 #include <stdio.h>

int main()
{
	float litros;
	int galones, valor_litro;
	
	printf ("Ingrese galones compra: ");
	scanf ("%d",&galones);
	litros= (galones*3.785);
	valor_litro= (litros*820);
	printf ("Cantidad de litros: %.3f\n", litros);
	printf ("Valor compra: %d", valor_litro);
	
	return 0;
}

