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


//fflush(stdin);

int main()
{
    char seguir='s';
    int opcion;
    Ecliente Mcliente [TAM];
    Ealquileres Malquiler [TAMALQUILER];
    Ecategoria Mcategoria[CATEGORIAS];
    Ejuego Mjuego[TAMALQUILER];
    Efecha Mfecha[TAMALQUILER];

    int r;

    JuegosHCD(Mjuego);
    categoriaHCD(Mcategoria);
    //clienteHCD(Mcliente);

    r=inicializarClientes (Malquiler, TAM);


    while (seguir=='s')
    {
        system("cls");
        printf("\t\tMENU");
        printf("\n\n1-Alta cliente");
        printf("\n\n2-Modificar cliente");
        printf("\n\n3-Baja cliente");
        printf("\n\n4-Listar cliente");
        printf("\n\n5- Alta alquiler");
        printf("\n\n6-listar alquileres");
        printf("\n\n7-Salir\n");

        do
        {
            printf("\n\t\tingrese opcion: ");
            scanf("\n%d",&opcion);
        }
        while (opcion<1 || opcion>7);

        switch (opcion)
        {
        case 1:

            r=buscarEspacio(Mcliente,TAM);

            if (r==-1)
            {
                printf("La cantidad de clientes llego al limite");

            }
            else
            {
                altaCliente(Mcliente,r);
            }

            system("pause");

            break;

        case 2:

            system("cls");

             r= printEmployees(Mcliente, TAM);

            system("pause");
            break;

        case 3:

            system("cls");


            system("pause");
            break;

        case 4:

            system("cls");


            system("pause");
            break;

        case 5:

            system("cls");

            system("pause");
            break;

        case 6:

            system("cls");

            system("pause");
            break;

        case 7:

            seguir='c';

            break;
        }
    }

}
