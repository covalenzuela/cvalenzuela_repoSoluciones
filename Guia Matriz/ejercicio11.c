#include <stdio.h>
#include <string.h> //para strcpy y strlen
#include <ctype.h> // para tolower (mayusculas)

int
main(){
	
	char secuencia[1000];
    char ordenado[1000];
      
    int longitud;
    int i;
    int j;
    char x;
      
    printf("ingresa una secuencia (maximo 1000 caracteres):\n");
    scanf("%s",secuencia);
      
    /*copiar la cadena de original (secuencia) para no modificarla 
    y trabaja sobre la otra (odenada)*/
    longitud=strlen(secuencia); //obtiene el largo del string
    strcpy(ordenado,secuencia); //Copia la cadena
    
    /*usar bubblesort para comparar las letras*/
    for(i = 1; i < longitud; i++)
		for(j=0;j<longitud-i;j++){
			
			if((tolower(ordenado[j]))>(tolower(ordenado[j+1]))){
			/*Para pasar la letra sea minuscula o mayuscula*/
			x=ordenado[j];
			ordenado[j]=ordenado[j+1];
			ordenado[j+1]=x;
			}
		}
                               
    printf("Tu secuencia es: %s \n",secuencia);
    printf("Tu secuencia de DNA ordenada es: %s \n",ordenado);

	return 0;
}
