/* 
 * iniciar programa
 * definir variables tipo...
 * 
 * mostrar en pantalla...
 * fin del programa
 * 
 */

#include <stdio.h>

int main() {
	int candidato1 = 0, candidato2 = 0, candidato3 = 0, votos_nulos = 0, cantidad_votos, voto;
	char s = ' ';
	float porcentaje1=0, porcentaje2=0, porcentaje3=0, porcentaje_nulos=0;
	printf ("Votaciones para presidente ICB \n:");
	printf ("para votar por el candidato 1 ingrese 1\n");
	printf ("para votar por el candidato 2 ingrese 2\n");
	printf ("para votar por el candidato 3 ingrese 3\n");
	printf ("si el voto es nulo ingrese n\n");
	
	while (s != 's') {
		printf ("ingresa voto:");
		scanf ("%d", &cantidad_votos);
		switch (cantidad_votos) {
			case 1:
				candidato1++;
				voto++;
				break;
			case 2:
				candidato2++;
				voto++;
				break;
			case 3:
				candidato3++;
				voto++;
				break;
			default:
				votos_nulos++;
				voto++;
				break;
		}
		while (getchar() != '\n');
	
	printf ("para finalizar votacion presione 's':\n");
	scanf ("%c", &s);
	}
	
	porcentaje1=(candidato1/cantidad_votos)*100;
	porcentaje2=(candidato2/cantidad_votos)*100;
	porcentaje3=(candidato3/cantidad_votos)*100;
	porcentaje_nulos=(votos_nulos/cantidad_votos)*100;
	
	if ((candidato1>candidato2)&&(candidato2>candidato3)){
		printf ("Candidato numero 1 ha ganado las elecciones\n");
	}
	if ((candidato2>candidato1)&&(candidato1>candidato2)){
		printf ("Candidato numero 2 ha ganado las elecciones\n");
	}
	if ((candidato3>candidato2)&&(candidato2>candidato1)){
		printf ("Candidato numero 3 ha ganado las elecciones\n");
	}
	if ((candidato1=candidato2)&&(candidato2>candidato3)){
		printf ("Candidatos numero 1 y 2 han empatado las elecciones\n");
	}
	if ((candidato1=candidato3)&&(candidato3>candidato2)){
		printf ("Candidatos numero 1 y 3 han empatado las elecciones\n");
	}
	if ((candidato2=candidato3)&&(candidato3>candidato2)){
		printf ("Candidatos numero 2 y 3 han empatado las elecciones\n");
	}
	
	printf ("el candidato 1 obtuvo: %d votos", candidato1);
	printf ("o un %f porciento de los votos", porcentaje1);
	printf ("el candidato 2 obtuvo: %d votos", candidato2);
	printf ("o un %f porciento de los votos", porcentaje2);
	printf ("el candidato 3 obtuvo: %d votos", candidato3);
	printf ("o un %f porciento de los votos", porcentaje3);
	printf ("cantidad votos nulos: %d", votos_nulos);
	printf ("o un %f porciento de los votos", porcentaje_nulos);
	printf ("la cantidad total de votos fue: %d", cantidad_votos);

	return 0;
}

