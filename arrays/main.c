#include <stdio.h>
#include <stdlib.h>
#include "BIBLO.h"
#define TAM 5

    int const LARGO = 5;
int main()
{
    int miArray[TAM] = {};
    int indice;

    cargarArray(miArray,TAM);
    mostrArarray(miArray,TAM);
    indice = buscarValor(miArray,TAM,5);
    if (indice !=-1)
    {
    printf("\n el indice es: %d",indice);

    }
    else{
            printf("\n valor inexistente!!");
                   }

    return 0;
}
