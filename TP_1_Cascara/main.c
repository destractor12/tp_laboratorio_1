#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    float suma;
    float resta;
    float multiplicacion;
    float division;




    while(seguir=='s')
    {
      fflush(stdin);
      opcion=mostrarMenu(numeroUno,numeroDos);


        switch(opcion)
        {
            case 1: (numeroUno)=getfloat("Ingrese el 1er operando:");
            fflush(stdin);


            case 2: (numeroDos)=getfloat("Ingrese el 2do operando:");
            fflush(stdin);


            case 3: suma=SumarOperandos(numeroUno, numeroDos);


                break;
            case 4: resta=restadeoperandos(numeroUno, numeroDos);


                break;
            case 5: multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);


                break;
            case 6: division=divisiondeoperandos(numeroUno, numeroDos);


                break;
            case 7:/*resultado=factorial(numeroUno!numeroDos);*/


                break;
            case 8: suma=SumarOperandos(numeroUno, numeroDos);
            resta=restadeoperandos(numeroUno, numeroDos);
            multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
            division=divisiondeoperandos(numeroUno, numeroDos);

                break;
            case 9:

                seguir = 'n';
                break;
        }

    return 0;
   }
}
