/*
 * iniciar programa
 * definir funcion contador la cual indicara cada grado con un "-"
 * definir variable grados (en °C) de tipo entero
 * solicitar variable grados
 * mostrar en pantalla grafica del termometro
 * llamar a la funcion contador de -
 * mostrar en pantalla gragica de termometro con los "-"
 * finalizar programa
 */


#include <stdio.h>

int contador (int grados){
	int i=0;
		for (i=0; i<=grados; i++){
			printf ("-");
		}
	return grados;
}
int main(){
	int grados;
	printf ("ingrese °C:");
	scanf ("%d", &grados);
	printf ("0°        10°       20°       30°       40°       50°       60°       70°       80°       90°       100°\n");
	printf ("|         |         |         |         |         |         |         |         |         |         |\n");
	contador (grados);
	return 0;
}

