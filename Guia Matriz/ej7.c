#include <stdio.h>

void sumatoria_fila(int n, int m, int mtz[n][m]){
	
	int i,j;
	int suma_filas=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
				suma_filas = suma_filas + mtz[i][j];
		}
		
		printf("suma de la fila %d es: %d \n", i, suma_filas);
		suma_filas=0;
	}
}

void 
llenar_mtz(int n, int m, int mtz[n][m]){
	
	int i,j;
	int numero;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			
			printf("ingrese numeros: ");
			scanf("%d", &numero);
			
			mtz[i][j]=numero;
		}
	}
}

void
imprimir_mtz(int n, int m, int mtz[n][m]){
	
	int i,j;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			
			printf("%d ", mtz[i][j]);
		}
	printf("\n");
	}
}

int
main(){

	int n=4;
	int m=5;
	
	int mtz[n][m];
	
	llenar_mtz(n, m, mtz);
	imprimir_mtz(n, m, mtz);
	sumatoria_fila(n, m, mtz);
	
	return 0;
}
