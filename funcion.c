#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int getInt (int rangoUno,int rangoDos,char mensajeE[],char mensajeC[])
{
    int num;

    printf("\ningrese que numero quiere validar: ");
    scanf("%d",&num);

    while (num>rangoUno)
    {
        printf("%s",mensajeE);
        printf("\nvuelva a intentar");
        printf("\ningrese que numero quiere validar: ");
        scanf("%d",&num);
    }

    printf("%s",mensajeC);

    return num;
}

