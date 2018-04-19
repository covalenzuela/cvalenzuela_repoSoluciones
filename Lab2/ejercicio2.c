/*
 * iniciar programa
 * definir variables numero entero
 * iniciar bucle while, solicitando un numero de filas (maximo 9)
 * iniciar bucle que realiza la operacion
 * mostrar en pantalla la piramide segun el numero de filas anteriormente solicitado
 * fin programa
 */


#include <stdio.h>

int main() {
	int fila, a, b, c;
	while (fila<1 || fila>9){
		printf ("ingrese numero de filas [maximo 9]:");
		scanf ("%d", &fila);
	}
	for (a=1 ; a<= fila; a++){
		for (b=1; b<=a; b++){
			printf ("%d", b);
			if (b==a){
				for (c=b-1; c>0; c--){
					printf ("%d", c);
				}
			}
		}
		printf ("\n");
	}
	
	return 0;
}

