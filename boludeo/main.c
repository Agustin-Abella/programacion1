#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char usuario [10][10]= ("jose","maria","jesus","marta","pedro");
    int nota[10]=(8,5,2,10,3);
    int i;
    int j;

   for(i=0;i<5;i++)
    {
        //usuario[i][0]=" ";
      printf("alumno : %s nota: %d  \n", usuario[i],nota[i]);

       //nota[i]=0;*/
    }

    for(i=0;i<5;i++)
    {
        //usuario[i][0]=" ";
      for(j=0;j<4;j++)
      {
        printf("%d  => %d \n",nota[i],nota[j]);

            (resultado=strcmp(usuario[i],usuario[j]) <usuario[j])
        if

        {
             int aux;
            aux = nota[i];
            nota[i] = nota[j];
            nota[j] = aux;

            char auxstring[10];
            strcpy(auxstring,usuario[i]);
            strcpy(usuario[i], usuario[j]);
            strcpy(usuario[j],auxstring);
        }
      }

       //nota[i]=0;*/
    }
    /*
     for(i=0;i<5;i++)
    {
        //usuario[i][0]=" ";
       strcpy(usuario[i] ," "); // usuario[i][0]=" ";

       //nota[i]=0;*/

   /*for (i=0;i<5;i++)
    {
        printf("ingrese usuario # %d",i+1);
        scanf("%s",usuario[i]);
        printf("ingrese el nota %d:",i+1);
        scanf("%d",&nota[i]);*/


    //strcpy(usuario[0] ,"hola");    // puntero
           /* printf("test %s \n",usuario[0]);
            printf("test %s \n",usuario[1]);*/


    //printf("ingrese usuario n:");
    //scanf("%s",usuario[1]);
    //int tamanio = strlen(usuario[8]);   //strlen buscar valores retornar indice muestra tamaño
    //printf("tamaño: %d \n",tamanio);
    for(i=0;i<10;i++)
    {

        printf("hello %s \n",usuario[i]);
    }




    return 0;
}
