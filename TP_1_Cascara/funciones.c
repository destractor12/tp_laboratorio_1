#include "funciones.h"
#include <stdio.h>
int mostrarMenu(float numeroUno, float numeroDos)
{
        int opcion;

        printf("1- Ingresar 1er operando (A= %f)\n",&numeroUno);
        printf("2- Ingresar 2do operando (B= %f)\n",&numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);

        return opcion;
}

float getfloat(char mensaje[])
{

    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);

}
float SumarOperandos( float numeroUno,float numeroDos)
{

   float Suma;
    Suma=numeroUno + numeroDos;
    printf("El resultado de la suma es: %f\n",Suma);
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
