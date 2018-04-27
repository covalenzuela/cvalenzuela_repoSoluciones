/*
 * iniciar programa
 * 
 * finalizar programa
 */


#include <stdio.h>
void numeros(){
	int i;
	for (i=0; i<100; i++){
		//numeros(i);
	
		if (i%10==0){
			printf ("%d", i);
			}
		else{
			printf(" ");
			printf ("-");
		}
	}
	printf ("\n");
	int a;
	for (a=0; a<9; a++){
		printf ("-");
	}
}
int main () {
	numeros ();
	int grados;
	printf ("ingrese grados °C:");
	scanf ("%d", &grados);

	return 0;
}

