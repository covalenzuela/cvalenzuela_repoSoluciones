/*
 * iniciar programa
 * crear una funcion la cual contenga los parametros para ingresar un numero
 * ingresar un numero
 * si el parametro para el numero no se cumple, se continuara solicitando un numero hasta que se cumpla.
 * crear funciones numero mayor y numero menor, las que calculan 
 * el mayor y menor numero que se puede formar con el numero anteriormente ingresado 
 * 
 * utilizar int main para llamar a las variables anteriores
 * finalizar programa
 * 
 */


#include <stdio.h>

int numero_mayor(int numero){
	
	int a;
	int b;
	int c;
	int d;
	
	a=numero%10;
	numero=numero/10;
	b=numero%10;
	numero=numero/10;
	c=numero%10;
	numero=numero/10;
	d=numero%10;
	numero=numero/10;
	
	if //son 24 if por probabilidades :( me quede sin tiempo
	
	return mayor;
	}

int numero_menor (int numero){
	
	int a;
	int b;
	int c;
	int d;
	
	a=numero%10;
	numero=numero/10;
	b=numero%10;
	numero=numero/10;
	c=numero%10;
	numero=numero/10;
	d=numero%10;
	numero=numero/10;
	
	//son 24 if por probabilidades :( me quede sin tiempo

	
	if (a<b && b<c && c<d){
		printf ("el numero mayor será: %d%d%d%d", a,b,c,d);
	}
	else (a<b && b<d && d<c){
		printf ("el numero mayor será: %d%d%d%d", a,b,d,c);
	}
	else (a<c && c<d && b<d){
		printf ("el numero mayor será: %d%d%d%d", a,c,b,d);
	}
	else (a<d && d<b && b<c){
	printf ("el numero mayor será: %d%d%d%d", a,b,c,d);
	}
	else (){
		printf ("el numero mayor será: %d%d%d%d", a,b,c,d);
	}
	
	return menor:
	}


int 
protocolo (){
	int numero;
	printf("ingrese un numero de 4 cifras, no debe de contener digitos iguales: ");
	scanf("%d", &numero);
	
	while (numero<1000 || numero>10000){
		printf("ingrese un numero: ");
		scanf("%d", &numero);
	}
	return numero;
}	

int main(){
	int numero;
	numero=protocolo();
	printf("%d", numero);
	
	numero_mayor(int numero);
	numero_menor(int numero);
	
	return 0;
}

