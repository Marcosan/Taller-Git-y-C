#include <stdio.h>
#include <string.h>

void imprimirCifrado(char frase[], int llave);


int main(int argc, char **argv){
	char cadena[100];
	int llave;
	
	printf("Ingrese frase: ");
	fgets(cadena, 100, stdin);
	
	printf("Ingrese llave: ");
	llave = getchar() - '0';
    
	imprimirCifrado(cadena, llave);

	return 0;
}


void imprimirCifrado(char cadena[], int llave){
	int new_cadena[100];
	
	for(int i=0;i<=strlen(cadena);i++){
		if ((cadena[i] >= 65 && cadena[i] <= 90) || (cadena[i] >= 97 && cadena[i] <= 122) ){
			new_cadena[i] = (int) cadena[i] + llave;
			if ((new_cadena[i] > 90 && new_cadena[i] < 97) || (new_cadena[i] > 122)){
				new_cadena[i] = new_cadena[i] - 24;
			}
		}else{
			new_cadena[i] = (int) cadena[i];
		}
		printf("%c", new_cadena[i]);
	}
}
