#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcionesImput.h"


/**
 * \brief Solicita un n˙mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n˙mero ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un n˙mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n˙mero ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    setbuf(stdin,NULL);
    scanf("%c",&auxiliar);
    return auxiliar;
}

/**
 * \brief Verifica si el valor recibido es numÈrico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n˙merico y 0 si no lo es
 *
 */

int esNumericoFlotante(char str[])
{
    int i=0;
    int cantidadPuntos=0;
    while(str[i] != '\0')
    {
        if (str[i] == '.' && cantidadPuntos == 0)
        {
            cantidadPuntos++;
            i++;
            continue;

        }
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

/**
 * \brief Verifica si el valor recibido es numÈrico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n˙merico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
    int i=0;
    int valida;
    while(str[i] != '\0')
    {
        valida=isdigit(str[i]);
        if(valida==0){
            return 0;
            break;

        }
        i++;
    }
    return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
            break;


        i++;
    }
    return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo letras y n˙meros
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y n˙meros, y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
            return 0;
        i++;
    }
    return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo n˙meros, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
        if(str[i] == '-')
            contadorGuiones++;
        i++;
    }
    if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar· el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

/**
 * \brief Solicita un texto al usuario y lo devuelve (acpeta espacios)
 * \param mensaje es el mensaje a ser mostrado
 * \param input Array donde se cargara el texto ingresado
 * \return void
 *
 */

void getStringNombre(char mensaje[], char input[])
{
    setbuf(stdin,NULL);
    printf("%s", mensaje);
    scanf("%50[^\n]", input);
}


/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar· el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un texto al usuario y lo devuelve con el primer caracter de cada palabra en mayusculas y lo demas en minusculas
 * \param mensaje es el mensaje a ser mostrado
 * \param input Array donde se cargara el texto ingresado
 * \return 1 si el texto contiene solo letras
 *
 */

int getStringLetrasNombre(char mensaje[], char input[])
{
    char auxiliar[256];
    int i, auxiliarLenght;
    getStringNombre(mensaje, auxiliar);
    if(esSoloLetras(auxiliar))
    {
        auxiliarLenght = strlen(auxiliar);
        for (i = 0; i < auxiliarLenght; i++)
        {
            auxiliar[i] = tolower(auxiliar[i]);
        }
        auxiliar[0] = toupper(auxiliar[0]);
        for (i = 0; i < auxiliarLenght; i++)
        {
            if (auxiliar[i] == ' ')
            {
                auxiliar[i + 1] = toupper(auxiliar[i + 1]);
            }
        }
        strcpy(input, auxiliar);
        return 1;
    }
    return 0;
}

/**
 * \brief Solicita un texto numÈrico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar· el texto ingresado
 * \return 1 si el texto contiene solo n˙meros
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un texto numÈrico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar· el texto ingresado
 * \return 1 si el texto contiene solo n˙meros
 */
int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Es el limite inferior aceptado
 * \param lowLimit Es el limite superior aceptado
 * \return El numero ingresado por el usuario
 *
 */
int getValidInt(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit)
{
    char auxStr[256];
    int auxInt;
    while(1)
    {
        if (!getStringNumeros(requestMessage,auxStr))
        {
            printf ("%s\n",errorMessage);
            continue;

        }
        auxInt = atoi(auxStr);
        if(auxInt < lowLimit || auxInt > hiLimit)
        {
            printf ("El numero del debe ser mayor a %d y menor a %d\n",lowLimit,hiLimit);
            continue;

        }
        return auxInt;
    }
}

/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Es el limite inferior aceptado
 * \param lowLimit Es el limite superior aceptado
 * \return El numero ingresado por el usuario
 *
 */
long getValidlong(char requestMessage[],char errorMessage[], long lowLimit, long hiLimit)
{
    char auxStr[256];
    long auxInt;
    while(1)
    {
        if (!getStringNumeros(requestMessage,auxStr))
        {
            printf ("%s\n",errorMessage);
            continue;

        }
        auxInt = atol(auxStr);
        if(auxInt < lowLimit || auxInt > hiLimit)
        {
            printf ("El numero del debe ser mayor a %ld y menor a %ld \n",lowLimit,hiLimit);
            continue;
        }
        return auxInt;
    }
}

/**
 * \brief Solicita un numero flotante al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Es el limite inferior aceptado
 * \param lowLimit Es el limite superior aceptado
 * \return El numero ingresado por el usuario
 *
 */
int getValidFloat(char requestMessage[],char errorMessage[],float lowLimit, float hiLimit)
{
    char auxStr[256];
    float auxInt;

    while(1)
    {
        if (!getStringNumerosFlotantes(requestMessage,auxStr))
        {
            printf ("%s\n",errorMessage);
            continue;
        }
        auxInt = atof(auxStr);
        if(auxInt < lowLimit || auxInt > hiLimit)
        {
            printf ("El numero del debe ser mayor a %f y menor a %f\n",lowLimit,hiLimit);
            continue;
        }
        return auxInt;
    }
}

/**
 * \brief Solicita un string
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \param input Array donde se cargar· el texto ingresado
 * \return -
 *
 */
void getValidString(char requestMessage[],char errorMessage[], char input[])
{

    while(1)
    {
        if (!getStringLetras(requestMessage,input))
        {
            printf ("%s\n",errorMessage);
            continue;
        }
        //cleanStdin();
        break;
    }

}


/**
 * \brief Limpia el stdin, similar a fflush
 * \param -
 * \return -
 *
 */
void cleanStdin(void)
{
    //setbuf(stdin,NULL);
    int c;
    do
    {
        c = getchar();
    }
    while (c != '\n' && c != EOF);
}

/** \brief
 * Funcion para limpiar la pantalla de la consola
 * \param void Sin parametros
 * \return -
 *
 */
void clearScreen(void)
{

    system("@cls||clear");
}

void imprimeMenu()
{
    printf("1- ALTA DE USUARIO\n");
    printf("2- MODIFICAR DATOS DEL USUARIO:\n");
    printf("3- BAJA DE USUARIO\n");
    printf("4- PUBLICAR PRODUCTO\n");
    printf("5- MODIFICAR PUBLICACION\n");
    printf("6- CANCELAR PUBLICACION\n");
    printf("7- COMPRAR PRODUCTO\n");
    printf("8- LISTR PUBLICACIONES DE USUARIO \n");
    printf("9- LISTAR PUBLICACIONES\n");
    printf("0- LISTAR USUARIOS\n");
    printf("esc- Salir\n");

}

void CargaPersona(usuarios Lista[],int posicion)
{
    int valida;
    do
    {
        setbuf(stdin,NULL);
        printf("Ingrese Nombre y Apellido: ");
        scanf("%[^\n]",Lista[posicion].nombre);
        valida=validaCadenaAlpha(Lista[posicion].nombre);
    }while(valida==0);

    printf("Ingrese Edad: ");
    scanf("%d",&Lista[posicion].edad);

    while((Lista[posicion].edad>100 || Lista[posicion].edad<1) && !isdigit(Lista[posicion].edad))
    {
        printf("Ingrese Edad nuevamente: ");
        setbuf(stdin,NULL);
        scanf("%d",&Lista[posicion].edad);
    }
        printf("Ingrese DNI: ");

        Lista[posicion].dni=getValidInt("Ingrese DNI:","El DNI ingresado es incorrecto",10000000,99999999);

        Lista[posicion].estado=1;
}

int validaCadenaAlpha(char cadena[])
{
    int posicion;
    int retorno;
    int largo;
    int contadorDeEspacios=0;

    largo= strlen(cadena);
    for(posicion=0;posicion<largo;posicion++)
    {
        if(cadena[posicion]!=' ')
        {
            retorno= isalpha(cadena[posicion]);

            if(retorno==0)
            {
                return 0;
                break;
            }
        }else
            {
                contadorDeEspacios++;
            }
    }
    if (contadorDeEspacios>1)
    {
        return 0;
    }else{

        return 1;
        }
}
