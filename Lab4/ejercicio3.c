/*
 * iniciar programa
 * deinir funcion que calcule las personas infectadas con el porcentaje de error
 * definir funcion que calcule el total de personas que talvez este infectada
 * definir funcion al resultado de la funcion anterior le sumamos 1 (que es la persona que esta realmente infectada)
 * definir funcion calcula el porcentaje de personas infectadas 
 * definir un procedimento para imprimir el resultado de la funcion anterior
 * llamar en orden las funciones anteriores
 * mostrar en pantalla probabilidad que tiene de estar infectada la persona
 * finalizar programa
 */
 
#include <stdio.h>

 float probabilidad_infectados(){
	 float total_personas=100000.0;
	 float personas_con_error;
	 personas_con_error= total_personas*0.01;
	 
	 return personas_con_error;
 }
 
 float personas_tal_ves_infectadas(){
	 float total_de_personas_con_error;
	 total_de_personas_con_error= 0.5*probabilidad_infectados();
	 
	 return total_de_personas_con_error;
}

 float cantidad_de_personas(){
	 float tal_ves_estan_infectados;
	 tal_ves_estan_infectados=1+ personas_tal_ves_infectadas();
	 
	 return tal_ves_estan_infectados;
 }
 float porcentaje_de_personas_infectadas(){
	 float porcentaje;
	 porcentaje= 100000.0/(100.0*cantidad_de_personas());
	 return porcentaje;
 }
 void imprimir_el_porcentaje(float porcentaje){
	printf ("el porcentaje final es aproximadamente: %f", porcentaje);
}
 int main(){
	float ppi;
	probabilidad_infectados();
	personas_tal_ves_infectadas();
	cantidad_de_personas();
	ppi= porcentaje_de_personas_infectadas();
	imprimir_el_porcentaje(ppi);
	return 0;
}

