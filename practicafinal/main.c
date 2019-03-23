#include <stdio.h>
#include <stdlib.h>

/** \brief
 * ingrese la nota de 5 alumnos (entre 0 y 10)
 * informar cuantos aprobaron
 * el promedio de notas de todos
 * el promedio de notas de los que no aprobaron
 * \return int
 *
 */
int pedirNumero(void);
int sacarAprobacion(int notaMinima, int nota);
void claseUnoRepaso(void);
int main()
{
    int estaAprobado;
    int nota;
    estaAprobado=sacarAprobacion(6,nota);
    if (estaAprobado == 1)
    {
        printf("esta aprobado");
    }
    else{
        printf("no esta aprobado");
    }

    return 0;

}
int pedirNumero(void)
{
   int contador = 0;
   int nota;

    do
    {
        printf("ingrese la nota del alumno: ");
        scanf("%d", &nota);
        contador++;
    }
    while(contador < 5);
    return 0;
}
int sacarAprobacion(int notaMinima, int nota)
{
    if (nota>=notaMinima)
    {
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}
void claseUnoRepaso(void)
{
    int notaIngresada;
    int sumaTotal;
    int sumaNoAprobados;
    int contadorAprobados;
     int contadorDeNoAprobados;
     float promedioTotal;
     float promedioDeNoAprobados;
}
