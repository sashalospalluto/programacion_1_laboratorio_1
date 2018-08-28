#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contCeros=0;
    char opcion=' ';
    int contPares=0;
    int contImpares=0;
    int sumaNegativos=0;
    int sumaPositivos=0;
    int maximo;
    int minimo;
    int contNegativos=0;
    int contPositivos=0;

    while(opcion=='n')
    {
        printf("ingrese un numero");
        scanf("%d",numero);
        printf ("para dejar de cargar numero, escriba n");
        fflush(stdin);
        scanf("%c",opcion);

        if (numero==0)
        {
            contCeros++;
        }   else if (numero<0)
                {
                    if(numero%2==0)
                    {
                        contPares++;
                        sumaNegativos=sumaNegativos+numero;
                        contNegativos++;
                    }else
                    {
                       contImpares++;
                       sumaNegativos=sumaNegativos+numero;
                       contNegativos++;
                    }

                }else   if(numero%2==0)
                        {
                            contPares++;
                            sumaPositivos=sumaPositivos+numero;
                            contPositivos++;
                        } else
                          {
                               contImpares++;
                               sumaPositivos=sumaPositivos+numero;
                               contPositivos++;
                          }

        if (contPares==1 || contImpares==1)
        {
            maximo=numero;
            minimo=numero;
        } else  if(maximo<numero)
                {
                    maximo=numero;
                } else  if(minimo>numero)
                        {
                            minimo=numero;

    }

    scanf("\nCantidad de positivos: %d",contPositivos);
    scanf("\nCanti")

}
