//inicio programa
//crear una funcion para un numero aleatorio y retornarla
//crear una funcion main donde se declaran variables tipo entero y de caracter
//ralizar un ciclo while para preguntar la continuidad del programa (si el usuario quiere continuar)
//en el caso de que se continue se preguntara denuevo por quien votará
//crear un contador que guardará las veces que se gane y pierda, si se empata no se guarda
//imprimir en pantalla las veces que se gana

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numaleatorio (){
	int numero;
	numero = rand()%100;
	return numero;
}

int main ()
{
	int a,b;
	char opcion;
	char fin='S';
	int ganador;
	int perdedor;
	ganador=0;
	perdedor=0;
	srand (time(NULL));
	
	while (fin=='S'){
		printf("A o B\n");
		scanf(" %c", &opcion);
		a=numaleatorio();
		b=numaleatorio();
		printf ("el numero generado para a es: %d\n",a);
		printf ("el numero generado para b es: %d\n",b);
		if (opcion=='a' && a>b){
			ganador++;
		
			printf("HAS GANADO \n");
		}
			else if (opcion== 'b'&& b>a){
				ganador++;
			
			printf("HAS GANADO \n");
			
		}
		else {
			perdedor++;
			printf("HAS PERDIDO\n");
		
		printf ("Quieres probar otra vez? (S/N): \n");
		scanf (" %c",&fin);
		while(getchar()!='\n');
	
	}
	printf("HAS GANADO ESTE NUMERO DE VECES: %d",ganador);
}
	
	
	return 0 ;
}

