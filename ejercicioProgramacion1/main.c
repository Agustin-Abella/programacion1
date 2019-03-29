#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("pause");
    char seguir;
    int contadorPositivos =0;
    int contadorNegativos=0;
    int contadorCeros=0;
    int numeros;
    int promedioPositivos;
    int valorPositivos=0;
    int promedioNegativos;
    int valorNegativos=0;
    int resta;
    promedioPositivos = valorPositivos/contadorPositivos;
    promedioNegativos = valorNegativos/contadorNegativos;
    resta= valorNegativos -  valorPositivos;


    do
    {
        printf( "\ningrese numeros del -500 al 500");
        scanf("%d",&numeros);
        if (numeros<-500||numeros>500)
        {
             printf("\nel numero incorrecto");
        }
        printf("\n   Desea introducir otro numero (s/n)?: ");
        fflush( stdin );
      scanf( "%c", &seguir);

    }
    while(seguir != 'n');

    if (numeros>0)
    {
        contadorPositivos++;

        valorPositivos=numeros+valorPositivos;
    }
    if (numeros <0)
    {
        contadorNegativos++;
        valorNegativos=numeros+valorNegativos;
    }
    if(numeros==0)
    {
        contadorCeros++;
    }
    printf("\nla cantidad de positivos son:%d ",contadorPositivos);
     printf("\nla cantidad de negativos son: %d",contadorNegativos);
      printf("\nla cantidad de ceros son: %d",contadorCeros);
         printf("\nel promediode numeros positivos es:%d ",promedioPositivos);
          printf("\nla  suma de los negativos es: %d ",valorNegativos);
           printf("\nla resta entre positivos y negativos es : %d",resta);

    return 0;
}
