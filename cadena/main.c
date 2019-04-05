#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[10];
    char otroNombre[50]= "jose perez";
   // int largo;
    int compara;

    strlwr(otroNombre);

    //strcpy(nombre,otroNombre);
    //strncpy(nombre,otroNombre,10);

    //printf("ingrese su nombre: ");
    //fgets(nombre,50,stdin);
    //scanf("%s", nombre);
    //gets(nombre);
    //scanf("%[^\n]", nombre);

    //largo =strlen(nombre);
    printf("su nombre es: %s",nombre);
   // printf("\n%d",largo);

 compara = stricmp(nombre,"pepe");
 printf("\n%d",compara);


   /* if(nombre == "pepe")
    {
        printf("ud se llama pepe");
    }*/

    return 0;
}


//1nombre   2apellido       3apellidoynombre Agustin, Agustin Cesar
