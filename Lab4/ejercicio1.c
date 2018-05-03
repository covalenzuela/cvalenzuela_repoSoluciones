/* 
 * iniciar programa
 * definir un procedimiento en el cual realizamos un ciclo while para calcular el resto de cada valor e invertir el numero a ingresar
 * definir una funcion la que solicita un numero, esta llama al procedimiento que realiza los calculos para invertir el numero 
 * mostrar numero invertido en pantalla
 * finalizar programa
 */

#include <stdio.h>      

void
	numero_invertido (int numero_inicial){
	int x=1;
	int resto;
	while(x==1){
		if(numero_inicial<=9){
			x=0;
			}
		resto= numero_inicial%10;
		printf("%d", resto);
			numero_inicial= numero_inicial-resto;
			numero_inicial= numero_inicial/10;
		} 
}

int main(){
	int numero_inicial;
	 printf ("ingrese su numero: ");
	 scanf ("%d", &numero_inicial);
	numero_invertido(numero_inicial); 
return 0;
}
