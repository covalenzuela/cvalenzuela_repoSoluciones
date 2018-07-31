#include <stdio.h> 

void 
llenar_mtz(int n, int mtz[n][n]){
	
	int i,j;
	int numero;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			
			printf("ingrese valor: ");
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

void comprobarSimetria (int n, int mtz[n][n]){
	
	int i, j;
	int cont=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i!=j){
				if (mtz[i][j]==mtz[j][i]){
					cont++;
				}
			}
		}
	}
	if (cont==2*n){
		printf("la matriz es simetrica");
	}
	else{
		printf("la matriz no es simetrica");
	}
}

int 
main (){

	int n;
	
	printf ("ingrese valor la matriz:");
	scanf ("%d", &n);
	
	int mtz[n][n];
	
	llenar_mtz(n, mtz);
	imprimir_mtz(n, mtz);
	
	comprobarSimetria(n, mtz);	
	
	return 0;
}
