/*
 * iniciar programa
 * definir funcion (1) para calcular lo que come cada uno
 * definir funcion (2) para calcular la diferencia entre los huevos de juan y los huevos que come cada uno, llamando a la funcion (1) para un valor
 * definir funcion (3) para calcular la diferencia entre los huevos de manuel y los huevos que come cada uno, llamando a la funcion (1) para un valor
 * definir funcion (4) para calcular la sumatoria de los resultados de las 2 funciones anteriores
 * definir funcion (5) para calcular el dinero correspondiente a juan
 * definir funcion (6) para calcular el dinero correspondiente a manuel
 * definir un procedimento que me imprima los resultados de las 2 ultimas variables correspondiente al dinero de juan y manuel 
 * llamar en orden las funciones anteriores
 * mostrar en pantalla dinero del pago para juan y manuel
 * finalizar el programa
 */


#include <stdio.h>

float huevos_por_persona(){
	int huevos=8.0; int personas=3.0; float huevospersona;
	huevospersona=huevos/personas;
	
	return huevospersona;
}

float resto1(){
	int juan=3.0; float resto_juan;
	resto_juan=juan-huevos_por_persona();
	return resto_juan;
}

float resto2(){
	int manuel=5.0; float resto_manuel;
	resto_manuel=manuel-huevos_por_persona();
	return resto_manuel;
}

float suma_restos(){
	float restos; 
	restos=resto1()+resto2();
	return restos;
}

float dinero1(){
	int dinero_antonio=80.0; float dinero_juan;
	dinero_juan=(dinero_antonio*resto1())/suma_restos();
	return dinero_juan;
}

float dinero2(){
	int dinero_antonio=80.0; float dinero_manuel;
	dinero_manuel=(dinero_antonio*resto2())/suma_restos();
	return dinero_manuel;
}

void  imprimir_dinero(float dinero_manuel, float dinero_juan){
	printf ("el dinero a pagar a Juan es: %.1f \n", dinero_juan);
	printf ("el dinero a pagar a Manuel es: %.1f \n", dinero_manuel);
}

int main (){      
	float x,y;
	huevos_por_persona();
	resto1();
	resto2();
	suma_restos();
	x=dinero1();
	y=dinero2();
	imprimir_dinero(x,y);
	return 0;
}
