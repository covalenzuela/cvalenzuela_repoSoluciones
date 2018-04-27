/*
 * iniciar programa
 * definir un procedimiento que solicite la variable contador, la cual sea el total a pagar
 * solicitar y guardar variable contador de tipo entero
 * definir e iniciar una funcion con un ciclo for para calcular el pago mensual y duplicar la cuota anterior
 * ingresar variables tipo entero
 * llamar a la funcion para calcular el total a pagar
 * mostrar en pantalla el resultado
 * finalizar programa
 */


#include <stdio.h>

	void 
	total (int contador){
		printf ("ingrese el total a pagar: %d", contador);
	}
	int xmes (int contador, int pago){
	int i;
		for (i=1; i<=pago; i++){
		printf ("cuota %d", i);
		printf ("total a pagar: %d\n" , contador);
		contador = contador*2;
	}
	return contador;
}
int main (){
	int pago=20;
	int contador=10;
	contador = xmes(contador, pago);
	total (contador);
	return 0;
}

