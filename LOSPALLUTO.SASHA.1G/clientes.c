#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>
#include "funciones.h"

#define TAM 10
#define TAMALQUILER 50
#define CATEGORIAS 5
/*
void clienteHCD(Ecliente* cliente)
{
    int cod[]= {1,2,3,4};
    char nombre[][51]= {"Alfredo","Ricardo","Ruben","Tefi"};
    char apellido[][51]= {"Lopez","Sul","Lamas","Luzio"};
    char sexo[]= {'m','m','m','m','f'};
    double telefono[21]= {42057543, 1166262120, 1544989846, 42653290};
    int i;

    for(i=0; i<4; i++)
    {
        strcpy(cliente[i].nombre,nombre[i]);
        strcpy(cliente[i].sexo ,sexo[i]);
        cliente[i].codigo=cod[i];
        cliente[i].telefono=telefono[i];
        cliente[i].isEmpty=1;

    }
}

*/

int inicializarClientes (Ecliente* cliente, int len)
{
    int resultado=-1;

    for (int i=0;i<len;i++)
    {
        cliente[i].isEmpty=0;
        printf("%d\n\n", cliente[i].isEmpty);
        resultado=0;
    }

 return resultado;

}


int buscarEspacio (Ecliente cliente, int len)
{

    for (int i=0; i<len; i++)
    {
        if(cliente[i].isEmpty==0)
        {
            return i;
        }
    }
    return -1;
}


void altaCliente (Ecliente cliente,int pos)
{
    printf("\t\tCARGA DE CLIENTE");
    fflush(stdin);
    printf("\n\nIngrese nombre: ");
    gets(cliente[pos].nombre);
    fflush(stdin);
    printf("\nIngrese apellido: ");
    gets(cliente[pos].apellido);
    fflush(stdin);
    printf("\nIngrese sexo (f o m): ");
    scanf("%c",cliente[pos].sexo);
    printf("\nIngrese telefono: ");
    scanf("%f",cliente[pos].telefono);

    cliente[pos].codigo=pos+1001;


}




//BORRAR

int printEmployees(Ecliente* list, int length)
{
    printf("   codigo    Nombre    Apellido     Telefono     Sexo\n\n");

    for(int i=0; i < length; i++)
    {

        if( list[i].isEmpty == 1)
        {
            printf("%4d %10s %10s     %6f %10c %10d\n", list[i].codigo, list[i].nombre, list[i].apellido, list[i].telefono, list[i].sexo, i);
        }
    }

    return 0;
}
