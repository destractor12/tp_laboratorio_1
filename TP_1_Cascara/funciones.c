#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu(float numeroUno, float numeroDos)
{

        printf("1- Ingresar 1er operando (A= %f)\n",numeroUno);
        printf("2- Ingresar 2do operando (B= %f)\n",numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

}

float getfloat(char mensaje[])
{

    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);

    return numero;
}
float Sumadeoperandos( float numeroUno,float numeroDos)
{
    float suma=0;

    suma=numeroUno+numeroDos;

    return suma;
}
float restadeoperandos( float numeroUno,float numeroDos)
{
    float resta;

    resta=numeroUno-numeroDos;

    return resta;
}

float divisiondeoperandos(float numeroUno, float numeroDos)
{
    float div;

    div=numeroUno/numeroDos;

    return div;
}

float multiplicaciondeoperandos(float numeroUno, float numeroDos)
{
    float mult;

    mult=numeroUno*numeroDos;

    return mult;
}

int factorial(int numero)
{
    int respuesta;
    if(numero == 0)
    {
        respuesta = 1;
    }
    else
    {
          respuesta = numero * factorial(numero-1);
    }
    return respuesta;
}
