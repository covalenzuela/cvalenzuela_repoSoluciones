/**
 * ejercicio 8.c
 * Algoritmo para evaluar un determinado polinomio en distintos valores de "x"
 */


#include <stdio.h>

int main()
{
	int x, y;
	
	printf ("Ingrese x: ");
	scanf ("%d",&x);
	y= (x*x*x)+(2*x*x)+(3*x)+5;
	printf ("p(x)=%d",y);
	
	return 0;
}

