#include <stdio.h> 

void 
llenar_mtz(int n, int m, int mtz[n][m]){
	
	int i,j;
	int numero;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			
			printf("ingrese valor: ");
			scanf("%d", &numero);
			
			mtz[i][j]=numero;
		}
	}
}

void
imprimir_mtz(int n, int m, int mtz[n][m]){
	
	int i, j;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			
			printf("%d ", mtz[i][j]);
		}
	printf("\n");
	}
}

void 
traspuesta(int n, int m, int mtz[n][m]){
	
	int i, j;
	
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
		printf("%d ", mtz[j][i]);
		}
	printf("\n");
	}
}

int 
main (){

	int n;
	int m;
	
	printf ("ingrese valor de ancho:");
	scanf ("%d", &n);
	printf("ingrese valaor de largo:");
	scanf("%d", &m);
	
	int mtz[n][m];
	
	llenar_mtz(n, m, mtz);
	imprimir_mtz(n, m, mtz);
	
	printf("la matriz traspuesta es: \n");
	traspuesta(n,m,mtz);		
	
	return 0;
}
