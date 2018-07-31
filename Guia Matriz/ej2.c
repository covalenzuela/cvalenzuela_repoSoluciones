#include <stdio.h> 

int 
main ()
{
	int n;
	
	printf ("ingrese valor de N:");
	scanf ("%d", &n);
	
	int mtz[n][n];
	int i, j;
	
	//Ingresar
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			mtz[i][j]=0;
		}
	}
	
	//Print
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				
				if (i==j){
				printf("%d ", mtz[i][j]=1);
				}
				else 
				printf ("%d ", mtz[i][j]=0);
		}
		printf("\n");
	}
	return 0;
}
