#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void 
temperatura_minima(int n, int m, int mtz[n][m]){
	
	int i;
	int j;
	int menor= 50;
	int minima[n];
	
	for (i=0; i<n; i++){
		menor=50;
		for (j=0; j<m; j++){
			if (menor>mtz[i][j]){
				menor=mtz[i][j];
			}
		}
		minima[i] = menor;
		printf ("\nLa menor temperatura del dia %d es %d °C", i+1, menor);
	}
	
	printf ("\n");
	
	for (i=0; i<n;i++){
		if (menor>minima[i]){
			menor=minima[i];
			}
		
	}
	printf ("\nLa menor temperatura de la semana es %d °C\n", menor);
}

void 
temperatura_maxima(int n, int m, int mtz[n][m]){
	
	int maxima[n];
	int i;
	int j;
	int mayor=0;
	
	for (i=0; i<n; i++){
		mayor=0;
		for (j=0; j<m; j++){
			if (mayor<mtz[i][j]){
				mayor= mtz[i][j];
			}
		}
	
		maxima[i] = mayor;
		printf ("\nLa mayor temperatura del dia %d es %d °C", i+1, mayor);
	}
	
	for (i=0; i<n;i++){
		if (mayor<maxima[i]){
			mayor=maxima[i];
		}
	}
	printf ("\n\nLa mayor temperatura de la semana es %d °C\n", mayor);
}

void 
media_por_dia(int n, int m, int mtz[n][m]){
	
	int i,j;
	int suma_dias=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
				suma_dias = suma_dias + mtz[i][j];
		}
		
		printf("\n temperatura media del dia %d es: %d °C ", i+1, suma_dias/24);
		suma_dias=0;
	}
	printf("\n");
}

void media_total(int n, int m, int mtz[n][m]){

	int i,j;
	int suma_total=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			suma_total = suma_total + mtz[i][j];
		}
	}
	
	printf("\nla temperatura promedio de la semana es: %d °C \n", suma_total/168);
	printf("\n");
}

int azar(){
	
	int v;
	
	v=(rand()%42)+1;
	return v;
}

void 
llenar_mtz(int n, int m, int mtz[n][m]){
	
	int i,j;
	int x;
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			x=azar();
			mtz[i][j]=x;
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

int 
main(){

	int n=7;
	int m=24;
	int mtz[n][m];
	srand(time(NULL));
     
    
    printf("\nlas temperaturas en °C por dia en intervalos de una hora por dia:");  
    printf("\n");
    llenar_mtz(n, m, mtz);
    imprimir_mtz(n, m, mtz);
	
	media_por_dia(n,m,mtz);
	media_total(n,m,mtz);
	
	temperatura_maxima(n,m,mtz);
	temperatura_minima(n,m,mtz);
	return 0;
}
