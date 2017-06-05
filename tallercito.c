/* Inclusión de archivos */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXIMO 1024
#define ESPACIO 32
#define MAXMAY 90
#define MINMAY 65
#define LETRAS 26

//SE CONSIDERA QUE EL USUARIO NO IGRESARA LETRAS MINUSCULAS (LO DIJO EN LA ULTIMA CLASE).

void encriptar(char cadena[MAXIMO],int numero); //funcion que encriptara el mensaje
void encriptar(char cadena[MAXIMO],int numero) //implementacion
{
   int i=0;

   while (cadena[i]!= '\0')
   {
        if (cadena[i] == ESPACIO)
             {
              cadena [i]=cadena[i]-numero;
             }
         cadena[i]=cadena[i]+numero;


         if ((cadena [i] <= MAXMAY && cadena[i] >= MINMAY) || cadena[i] == ESPACIO) //VALIDA DESBORDAMIENTO DE MAYUSCULAS Y ESPACIO
         {

         cadena[i]=cadena[i];
         }
         else if(cadena[i]<MINMAY)
           {
             cadena[i]=cadena[i]+LETRAS;
             cadena[i]=cadena[i];
           }
       else
        {
        cadena[i]=cadena[i]-LETRAS;
        cadena[i]=cadena[i];
       }
 printf("\nMensaje cifrado:%s\n",cadena);
// PARA EL OTRO CODIGO DE ENCRIPTACION
      if(cadena[i]==65){
           printf(".-");}

      else if (cadena[i]==66){
           printf("-...");}

      else if (cadena[i]==67){
           printf("-.-. ");}

      else if (cadena[i]==68){
           printf("-..");}

      else if (cadena[i]==69){
           printf(".");}

      else if (cadena[i]==70){
           printf("..-.");}

      else if (cadena[i]==71){
	   printf("--.");}

      else if (cadena[i]==72){
           printf("....");}

      else if (cadena[i]==73){
           printf("..");}

      else if (cadena[i]==74){
           printf(".---");}

      else if (cadena[i]==75){
           printf("-.-");}

      else if (cadena[i]==76){
           printf(".-..");}

      else if (cadena[i]==77){
           printf("--");}

      else if (cadena[i]==78){
           printf("-.");}

      else if (cadena[i]==79){
           printf("---");}

      else if (cadena[i]==80){
           printf(".--.");}

      else if (cadena[i]==81){
           printf("--.-");}

      else if (cadena[i]==82){
           printf(".-.");}

      else if (cadena[i]==83){
           printf("...");}
     
      else if (cadena[i]==84){
           printf("-");}

      else if (cadena[i]==85){
           printf("..-");}

      else if (cadena[i]==86){
           printf("...-");}

      else if (cadena[i]==87){
           printf(".--");}

      else if (cadena[i]==88){
           printf("-..-");}

      else if (cadena[i]==89){
           printf("-.--");}

      else if (cadena[i]==90){
           printf("--..");}
 
      else
            {
            printf("/");
            }
         i++;
 }

}




/* Función principal */

int main (int argv, char **argc)

{

   int llave;
   char cadena[MAXIMO] = {0};

   // Impresión por pantalla y salida del programa
   printf("cifrado ciclico\n");
   printf("Ingrese el mensaje a cifrar(en mayusculas):");
   scanf("%1024[^\n]",cadena);


   printf("Ingrese la llave numerica:");
   scanf("%d",&llave);
   encriptar(cadena, llave);
   getchar();

   return 0;

}


