#include <stdio.h> 

void
intercambio(int n, int mtz[n][n]){
	
	int i,j;
	
	for (i=n-1; i>=0; i--){
		for (j=0; j<n; j++){
			
			printf("%d ", mtz[i][j]);
		}
	printf("\n");
	}
}

void 
llenar_mtz(int n, int mtz[n][n]){
	
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
	
	int i,j;
	
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
	
	printf ("la nueva matriz es:\n");
	intercambio(n, mtz);
		
	return 0;
}
