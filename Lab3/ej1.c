/*
 * iniciar programa
 * definir funciones para las horas trabajadas, para el sueldo por horas y para imprimir el resultado de la funcion anteriorcon variables de tipo entero
 * para la funcion de horas trabajadas se utilica un ciclo for y una suma para hacer el calculo
 * para la funcion del sueldo por hora se definen sus variables de tipo entero y multiplicarlas
 * para la funcion que imprima el resultado de la funcion para el sueldo por hora
 * definir variables para el procedimientos
 * solicitar el sueldo por hora trabajada
 * guardar datos
 * realizar operaciones
 * llamar a la funcion para imprimir el resultado (sueldo total)
 * mostrar en pantalla el sueldo total
 * finalizar programa
 */


#include <stdio.h>

int horas_trabajadas(){
	int i; int hora;
	int contador;
		i=0;
	for (i=1; i<=6; i++){
		printf ("ingrese horas trabajadas en el dia %d:\n", i);
		scanf ("%d", &hora);
		contador= hora+contador;
	}
	return contador;
}


int sueldoxhoras(int sueldo, int horas){
	int resultado;
	resultado=(sueldo*horas);
	return resultado;
}

void imprimir_sueldo(int resultado){
	
	printf ("el sueldo total es: %d", resultado);

	
}

int main (){
	int horas, contador=0, resultado; //variables definidas
	
	printf ("ingrese sueldo por cada hora trabajada: \n");
	scanf ("%d", &horas);
	contador=horas_trabajadas();
	resultado=sueldoxhoras(horas, contador);
	imprimir_sueldo(resultado);
	
	return 0;
}

