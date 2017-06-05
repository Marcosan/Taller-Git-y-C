#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cifradoCiclico(char cadena[], int llave);
void imprimirMorse(char cadena[]);
char* cifradoAutollave(char* mensaje, char* llave);
char* cifradoContrasenia(char* mensaje, char* llave);
char** llenarMatriz();
void print_matrix();


int main(int argc, char **argv){
	char cadena[100];
	int llave;
	char tipo;
	char *autollave;
	char llave2[20];

	//printf("%d + %d + %s\n", argv[1], argv[2], argv[3]);
	
	
    
	if ( (int)argv[1] == 0 || (int)argv[2] == 0  || (int)argv[3] == 0 )
	{
		printf("Interactivo:\n");

		printf("Tipo de cifrado: ");
		scanf("%c",&tipo);
		while(getchar() != '\n');

		switch(tipo){
		case 'c':
			printf("Cifrado ciclico.\n");
			printf("Ingrese frase: ");
			fgets(cadena, 100, stdin);
			//scanf("%s",&cadena);

			printf("Ingrese llave: ");
			//llave = getchar() - '0';
			scanf("%d",&llave);
			while(getchar() != '\n');
			cifradoCiclico(cadena, llave);

			break;
		case 'a':
		printf("Cifrado Auto Llave.\n");
			printf("Ingrese frase: ");
			fgets(cadena, 100, stdin);
			//scanf("%s",&cadena);

			printf("Ingrese llave: ");
			//llave = getchar() - '0';
			fgets(llave2, 20, stdin);
			//scanf("%d",&llave);
			//while(getchar() != '\n');
			autollave = cifradoAutollave(cadena,llave2);
			printf("hola2\n");
			break;
		case 3:
			printf("Ha ingresado el numero tres\n");
			break;
		default:
			printf("Ha ingresado un numero no valido\n");
			break;
		}
		
		//
	} else {
		printf("No Interactivo:\n");
		//if (argv[3][0] == "-c"){
			cifradoCiclico(argv[1], argv[2][0] - '0');
		//}
		
	}
	
	
	
	return 0;
}


void cifradoCiclico(char cadena[], int llave){
	int new_cadena[100];
	printf("Mensaje Cifrado: ");
	
	for(int i=0;i<=strlen(cadena);i++){
		if ((cadena[i] >= 65 && cadena[i] <= 90) || (cadena[i] >= 97 && cadena[i] <= 122) ){
			new_cadena[i] = (int) cadena[i] + llave;
			if ((new_cadena[i] > 90 && new_cadena[i] < 97) || (new_cadena[i] > 122)){
				new_cadena[i] = new_cadena[i] - 26;
			}
		}else{
			new_cadena[i] = (int) cadena[i];
		}
		printf("%c", new_cadena[i]);
	}
}

void imprimirMorse(char cadena[]){

}

char* cifradoAutollave(char* mensaje, char* llave){
	char *retornar;
	int m=26, n=26, i, j;
	int letra = 65;

	char *tab_recta[26];
    //char **tmp;// = malloc(30 * sizeof(char*));;//[26][26];
    //tmp=(char*)malloc(n*sizeof(char));

	//Llenar Matriz
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){        	
        	if(letra > 90){
        		letra = 65;
        	}
        	//printf("hola\n");
        	*((char *)tab_recta + (i * 27) + j) = (char)letra++;
        }
        letra = 65 + i + 1;
    }
	//Imprimir
	for (i=0; i < m; i++){
        for (j=0; j < n;j ++){
        	
            printf("%c ", *((char *)tab_recta + (i * 27) + j));
        }
        printf("\n");
    }
    printf("%s\n", llave);
    
	return retornar;
}

char* cifradoContrasenia(char* mensaje, char* llave){
	return "b";
}
