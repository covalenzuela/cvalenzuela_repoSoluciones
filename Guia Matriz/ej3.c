#include <stdio.h> 

void sumatoria_columnas(int n, int mtz[n][n]){
	
	int i,j;
	int suma_columnas=0;
	
	for (j=0; j<n; j++){
		for (i=0; i<n; i++){
				suma_columnas = suma_columnas + mtz[i][j];
		}
		
		printf("suma de la columna %d es: %d \n", j, suma_columnas);
		suma_columnas=0;
	}
}

void sumatoria_fila(int n, int mtz[n][n]){
	
	int i,j;
	int suma_filas=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
				suma_filas = suma_filas + mtz[i][j];
		}
		
		printf("suma de la fila %d es: %d \n", i, suma_filas);
		suma_filas=0;
	}
}

void sumatoria_total(int n, int mtz[n][n]){

	int i,j;
	int suma=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			suma = suma + mtz[i][j];
		}
	}
	
	printf("la suma total es: %d \n", suma);
}

void llenar_mtz(int n, int mtz[n][n]){
	
	int i,j;
	int numero;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			
			printf("ingrese numeros: ");
			scanf("%d", &numero);
			
			mtz[i][j]=numero;
		}
	}
}

void
imprimir_mtz(int n, int mtz[n][n]){
	
	int i, j;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			
			printf("%d ", mtz[i][j]);
		}
	printf("\n");
	}
}

int 
main (){

	int n;
	
	printf ("ingrese valor de N:");
	scanf ("%d", &n);
	
	int mtz[n][n];
	
	llenar_mtz(n, mtz);
	imprimir_mtz(n, mtz);
	sumatoria_fila(n, mtz);
	sumatoria_columnas(n, mtz);
	sumatoria_total(n, mtz);	
	
	return 0;
}
