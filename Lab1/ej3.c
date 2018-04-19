/*
 * iniciar programa
 * definir variables tipo numeros reales (precio_traje, descuento15, descuento8)
 * pedir y recibir precio_traje
 * escribir condiciones
 * si cumple los requisitos de la primera variable desarrollar la operacion,
 * sino cumple los requisitos pasar a la siguiente condicion y desarrolar la operacion
 * mostrar en pantalla el precio del traje con los descuentos
 * fin del programa
 */


#include <stdio.h>

int main() {
	float precio_traje, descuento15, descuento8;
	printf ("Ingrese el precio del traje:");
	scanf ("%f", &precio_traje);
	if (precio_traje > 2500.00) {
		printf ("Su traje tiene un descuento \n");
		descuento15= (0.85*precio_traje);
		printf ("El precio del traje es: %f", descuento15);
	}
	else if (precio_traje<=2500.00) {
		printf ("Su traje tiene un descuento \n");
		descuento8= (0.08*precio_traje);
		printf ("El precio del traje es: %f", descuento8);
	}
	return 0;
}

