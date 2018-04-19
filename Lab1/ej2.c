/*
 * iniciar programa
 * definir variables tipo entero (comensales, cuenta)y de tipo numeros reales (cuentaiva, cuentaivapropina, total, iva, propina)
 * solicitar y recibir cantidad de comensales
 * solicitar e ingresar cuenta
 * calcular el iva de la cuenta
 * calcular la cuenta mas el iva
 * calcular la propina
 * calcular la cuenta con el iva mas la propina
 * dividir el total entre el numero de comensales
 * mostrar en pantalla la cantidad ha pagar de cada comensal
 */


#include <stdio.h>

int main() {
	int comensales, cuenta;
	float iva, propina, cuentaiva, cuentaivapropina, total;
	
	printf ("Cantidad de comensales:");
	scanf ("%d", &comensales);
	printf ("Ingrese total de la cuenta:");
	scanf ("%d", &cuenta);
	iva= (cuenta*0.19);
	cuentaiva= (cuenta + iva);
	propina= (iva*0.1);
	cuentaivapropina= (cuentaiva + propina);
	total= (cuentaivapropina / comensales);
	
	printf ("Cada comensal ha de pagar: %f", total);
	
	
	return 0;
}

