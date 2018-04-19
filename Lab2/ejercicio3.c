/*
 * iniciar programa
 * definir variables numero decimal
 * solicitar edad del paciente
 * ver si se cumple la condicion de edad, y solicitar el peso del paciente
 * realizar operacion correspondiente para la condicion correspondiente
 * mostrar en pantalla la dosis a administrar en gotas
 * fin programa
 */


#include <stdio.h>

int main()
{
	float peso, gotas, gotas2, edad;
	
	printf ("ingrese edad del paciente:");
	scanf ("%f", &edad);
	if (edad<1){
		printf ("ingrese peso de el paciente:");
		scanf ("%f", &peso);
		gotas=((0.2*peso)/3);
		printf ("administrar la siguiente cantidad de gotas por dia: %f", gotas);
	}
	if (edad>1){
		printf ("ingrese peso de el paciente:");
		scanf ("%f", &peso);
		gotas2= ((0.2*peso)*5);
		printf ("administrar la siguiente cantidad de gotas por dia: %f", gotas2);
	}
		
	
	return 0;
}
