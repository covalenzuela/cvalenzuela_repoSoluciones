/*
 * iniciar programa
 * definir variables numero entero
 * crear un ciclo donde ingrese goles eguipo anfitrion y luego del eguipo visita, donde se mostrará si el equipo anfitrion gano, perdio o empato
 * repetir el ciclo 5 veces
 * mostrar en pantalla puntos totales del equipo anfitrion
 */


#include <stdio.h>

int main()
{
	int anfitrion, visita, contador=0, i=0; 
	while (i<5){
		printf ("ingrese goles equipo anfitrion:");
		scanf ("%d", &anfitrion);
		printf ("ingrese goles equipo visita:");
		scanf ("%d", &visita);
		if (anfitrion<visita){
			printf ("equipo anfitrion perdió \n");
			contador= contador +0;
		}
		if (anfitrion>visita){
			printf ("equipo anfitrion ha ganado \n");
			contador= contador+3;
		}
		if (anfitrion==visita){
			printf ("equipo anfitrion empato \n");
			contador= contador+1;
		}
	i++;
}
	printf ("los puntos totales del equipo anfitrion son: %d", contador);
	
	return 0;
}

