#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
float sacarPromedio(int suma, int cantidad);
int sacarAprobacion (int notaMinima, int nota);
int main()
{
    int elNumeroIngresado;
    float promedio;
    int estaAprobado;
    elNumeroIngresado=pedirNumero();
    printf("el numero ingresado fue : %d",elNumeroIngresado);
    promedio = sacarPromedio(94,5);
    printf("\n el promedio fue : %f",promedio);
    estaAprobado=sacarAprobacion(6,elNumeroIngresado); //(6,elNumeroIngresado);
    if(estaAprobado == 1)
    {
        printf("\n aprobo");

    }
    else{
        printf("no aprobo");
    }

    //sacarPromedio()


    return  0;
}
int pedirNumero()
{
    int miNumero;
    do{
            printf("\n ingrese un numero del 0 al 10: ");
                scanf("%d",&miNumero);

    }while(miNumero < 0 || miNumero >10);

    return miNumero;
}
float sacarPromedio(int suma, int cantidad)
{
    float retorno;
    retorno = (float)suma/cantidad;
    return retorno;
}
/** \brief
 *retorna 1 si el alumno aprobo la materia
 retorna 0 si el alumno desaprobo la materia
 * \param notaMinima int
 * \param nota int
 *es la nota que se saco el lumno
 * \return int
 *0 para no apobo
 *
 */
int sacarAprobacion (int notaMinima, int nota)
{
   if (nota >= notaMinima)
   {
        return 1;

   }
   else
   {
    return 0;

   }
    return 0;
}

