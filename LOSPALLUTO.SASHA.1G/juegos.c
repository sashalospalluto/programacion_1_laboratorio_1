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

void categoriaHCD (Ecategoria* categorias)
{
    int id []={1234,1122,1596,4562,7894};
    char descripcion[][51]={"mesa","azar","estrategia", "salon", "magia"};
    int i;

    for(i=0; i<5; i++)
    {
        strcpy(categorias[i].descripcion,descripcion[i]);
        categorias[i].id= id[i];
    }
}

void JuegosHCD(Ejuego* juego)
{
    int id[]= {1597, 5678, 9874, 1020};
    char descripcion[][51]= {"Juego de la oca","El uno","monopoly","grandes trucos"};
    int importe[]= {200,300,440,270};
    int i;
    int idCategoria[]={1234,1122,1596,4562,7894};

    for(i=0; i<5; i++)
    {
        strcpy(juego[i].descripcion,descripcion);
        juego[i].importe=importe[i];
        juego[i].codigo=id[i];
        juego[i].idCategoria=idCategoria[i];

    }
}
