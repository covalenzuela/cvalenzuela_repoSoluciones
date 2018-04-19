#include <stdio.h>

int main()
{
	float calificacion1, calificacion2, calificacion3, suma, promedio;
	int matricula;
	
	printf ("Ingrese matrícula: ");
	scanf ("%d", &matricula);
	printf ("Ingrese calificación 1: ");
	scanf ("%f", &calificacion1);
	printf ("Ingrese calificación 2: ");
	scanf ("%f", &calificacion2);
	printf ("Ingrese calificación 3: ");
	scanf ("%f", &calificacion3);
	suma= calificacion1 + calificacion2 + calificacion3;
	promedio= suma /3;
	printf ("El promedio es: %f\n", promedio);
	printf ("La matrícula es: %d", matricula);
	
	return 0;
}

