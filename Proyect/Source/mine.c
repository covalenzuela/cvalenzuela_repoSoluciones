#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//tamaño tablero
#define n 8

//imprime el tablero original y sus cambios
void
ImprimirTablero(char tablero[n][n]) {
	//system clear
	printf("\e[1;1H\e[2J");

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			//espacio despues del %c para que los . esten separados
			printf("%c ", tablero[i][j]);
		}
		printf(" \n");
	}
	printf("\n");
}

//ve si hay 4 en linea
int
comprobar_tablero(char tablero[n][n]){
	//Para el for, para recorrer el tablero
	int i,j;

	// -1: no gana nadie, 1: gana jugador0, 0: gana jugador1
	int ganador=-1;

	//Comprobar si hay cuatro en línea en vertical
	for(i=0; i<n; i++) {
		for(j=0; j<n-3; j++) {
			if (tablero[i][j]=='X' && tablero[i][j+1]=='X' && tablero[i][j+2]=='X' && tablero[i][j+3]=='X')
				ganador=1;
			else if (tablero[i][j]=='0' && tablero[i][j+1]=='0' && tablero[i][j+2]=='0' && tablero[i][j+3]=='0')
				ganador=0;
		}
	}

	if (ganador==-1) {
		//Comprobar si hay cuatro en línea en horizontal
		for(i=0; i<n-3; i++) {
			for(j=0; j<n; j++) {
				if (tablero[i][j]=='X' && tablero[i+1][j]=='X' && tablero[i+2][j]=='X' && tablero[i+3][j]=='X')
					ganador=1;
				else if (tablero[i][j]=='0' && tablero[i+1][j]=='0' && tablero[i+2][j]=='0' && tablero[i+3][j]=='0')
					ganador=0;
			}
		}
	}

	if (ganador==-1) {
		//Comprobar si hay cuatro en línea en diagonal 1
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				if (i+3<n && j+3<n) {
					if (tablero[i][j]=='X' && tablero[i+1][j+1]=='X' && tablero[i+2][j+2]=='X' && tablero[i+3][j+3]=='X')
						ganador=1;
					else if (tablero[i][j]=='0' && tablero[i+1][j+1]=='0' && tablero[i+2][j+2]=='0' && tablero[i+3][j+3]=='0')
						ganador=0;
				}
			}
		}
	}

	if (ganador==-1) {
		//Comprobar si hay cuatro en línea en diagonal 2
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				if (i+3<n && j-3>=0) {
					if (tablero[i][j]=='X' && tablero[i+1][j-1]=='X' && tablero[i+2][j-2]=='X' && tablero[i+3][j-3]=='X')
						ganador=1;
					else if (tablero[i][j]=='0' && tablero[i+1][j-1]=='0' && tablero[i+2][j-2]=='0' && tablero[i+3][j-3]=='0')
						ganador=0;
				}
			}
		}
	}

	int cont=0;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (tablero[i][j]=='.'){
				cont++;
			}
		}
	}

	if (cont==0){
		ganador=-2;
	}

	return ganador;
}

//jugada de los jugadores
int
hacer_jugada(char tablero[n][n], int columna, int jugador){
	//busca ultima posicion con .
	int pos=-1;

	//(desde abajo hacia arriba)
	for (int i=0; i<n; i++){
		if ((tablero[n-1-i][columna]=='.') && (pos==-1)){
			pos=n-1-i;
		}
	}

	if (jugador==1){
		tablero[pos][columna]='X';
	}
	else{
		tablero[pos][columna]='0';
	}
	return tablero[n][n];
}

//bool para ver si se cumple o no que la columna ingresada sea valida
bool
comprobar(char tablero[n][n], int columna){
	//columna valida?
	if ((tablero[0][columna]=='.') && columna>=0 && columna<=7){
		return true;
	}
	else{ //vuelve a pedir columna
		return false;
	}
}

//se ejecuta hasta que sea una jugada valida
int
jugada(int jugador, char tablero[n][n]){
	//jugada valida
	int estado=0;
	int columna;

	while(estado==0){
		printf("Turno del jugador %d\n", jugador);
		printf("Indique una columna (0 al 7): ");
		scanf("%d", &columna);

		if (comprobar(tablero, columna)){
			//cuando estado toma el valor 1 deja de pedir una columna valida
			estado=1;
		}
	}
	return columna;
}

int
jugar(char tablero[n][n], int jugador1, int jugador2){

	int columna;
	int estado=-1; //alternando entre jugadores mientras sea una columna valida

	while (estado==-1){
		columna=jugada(jugador1, tablero);
		tablero[n][n]=hacer_jugada(tablero, columna, jugador1);
		ImprimirTablero(tablero);
		estado=comprobar_tablero(tablero);

		if (estado==-1){ //para que no vuelva a entrar
			columna=jugada(jugador2, tablero);
			tablero[n][n]=hacer_jugada(tablero, columna, jugador2);
			ImprimirTablero(tablero);
			estado=comprobar_tablero(tablero);
		}
	}
	return estado;
}

int
main(){

	char tablero[n][n];
	srand(time(NULL)); //random azar jugador quien inicia
	int inicio;
	int jugador0, jugador1;
	int continuar;

	do{
		for (int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				//llena tablero con '.'
				tablero [i][j]='.';
			}
		}
		ImprimirTablero(tablero);

		//incio azar para el jugador que inicia
		inicio=(rand()%2);
		if (inicio == 0){
			printf("Inicia jugador 0");
			printf("\n");
			jugador0=0;
			jugador1=1;
		}
		else {
			printf("Inicia el jugador 1");
			printf("\n");
			jugador1=0;
			jugador0=1;
		} //fin del random para quien inicia

		/*if (jugador0==0){
			jugar(tablero, jugador0, jugador1);
		}
		else {
			jugar(tablero, jugador1, jugador0);
		} */

		int resultado;

		resultado=jugar(tablero, jugador0, jugador1);
		if (resultado == -2){
			printf("empate!!");
		}
		else {
			printf("el ganador es el jugador %d\n", resultado);
		}
		//ImprimirTablero(tablero);
		//comprobar_tablero(tablero);
		//printf("ganador!!");

		printf("¿Desea seguir jugando? Ingrese 1 para continuar");
		scanf("%d", &continuar);

	} while(continuar==1);

	return 0;
}
