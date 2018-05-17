/*
 * 
 * 
 * 
 */

#include <stdio.h>

void
descomponer(int variable){
	int suma;
	int A=0;
	int cont=0;
	while (suma>10 || cont==0){		
		suma=0;
		while(variable>10){
		
			A = variable%10;
			variable = variable/10;
			suma= suma + A;
			
			
			printf ("digitos : %d\n", A);
			printf ("suma: %d\n" , suma);
			printf ("variable: %d\n", variable);
		}
 
		suma=variable+suma;
		variable=A;
		cont=1;
	}
	printf ("la raiz digital del numero ingresado es: %d\n", suma);
}



int main(){
	
	int variable=0;
		printf("ingrese un numero: ");
		scanf ("%d", &variable);
		
	    descomponer(variable);
		return 0;
}
