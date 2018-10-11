#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define TAM 10
#define TAMALQUILER 50
#define CATEGORIAS 5

typedef struct
{
    int codigoAlquiler;
    int codigoJuego;
    int codigoCliente;
    float fecha;

} Ealquileres;

typedef struct
{
    int dia;
    int mes;
    int anio;

} Efecha;

typedef struct
{
    int codigo;
    char descripcion [51];
    float importe;
    int idCategoria;

} Ejuego;

typedef struct
{
   int id;
   char descripcion [51];
} Ecategoria;

typedef struct
{
    int codigo;
    char nombre [51];
    char apellido [51];
    char sexo;
    double telefono [21];
    int isEmpty;

} Ecliente;




#endif // FUNCIONES_H_INCLUDED
