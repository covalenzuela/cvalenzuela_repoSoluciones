// inicia programa
//creacion de funcion para un numero aleatorio con retorno
//crear una funcion main declarar variables tipo entero
//
//
// 
//

#include <stdio.h>

int secuencia(int n) {
	
	int numero;
	int c;
	int siguiente;
	int primero;
	int segundo;
	
	siguiente=0;
	primero=0;
	segundo=1;
	
	printf("Ingrese el numero: ");
	scanf(" %d", &numero);

	printf("La secuencia para el numero %d es:\n ", numero);
		
		
for (c=0; c<numero; c++){
	if (c<=1)
	siguiente= c;
	else {
		siguiente= primero+ segundo;
		primero= segundo;
		segundo= siguiente;
	}
	printf(" %d",siguiente);
}
	
	
	return n;
}

int main (){ 

	int numero;
	int c;
	int siguiente;
	int primero;
	int segundo;
	
	siguiente=0;
	primero=0;
	segundo=1;
	
	printf("Ingrese el numero: ");
	scanf(" %d", &numero);

	printf("La secuencia para el numero %d es:\n ", numero);
		
		
for (c=0; c<numero; c++){
	if (c<=1)
	siguiente= c;
	else {
		siguiente= primero+ segundo;
		primero= segundo;
		segundo= siguiente;
	}
	printf(" %d",siguiente);
}
return 0;
}

