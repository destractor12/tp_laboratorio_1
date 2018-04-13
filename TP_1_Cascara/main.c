#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    float resultado;




    while(seguir=='s')
    {
      opcion=menu(numeroUno, numeroDos);

        scanf("%d",&opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1: numeroUno=getfloat("Ingrese el 1er operando:");
            fflush(stdin);

                break;
            case 2: numeroDos=getfloat("Ingrese el 2do operando:");
            fflush(stdin);

                break;
            case 3: resultado=Sumadeoperandos(numeroUno, numeroDos);


                break;
            case 4: resultado=restadeoperandos(numeroUno, numeroDos);


                break;
            case 5:resultado=multiplicaciondeoperandos(numeroUno, numeroDos);


                break;
            case 6:resultado=divisiondeoperandos(numeroUno, numeroDos);


                break;
            case 7:resultado=factorial();


                break;
            case 8: resultado=Sumadeoperandos(numeroUno, numeroDos);
            resultado=restadeoperandos(numeroUno, numeroDos);
            resultado=multiplicaciondeoperandos(numeroUno, numeroDos);
            resultado=divisiondeoperandos(numeroUno, numeroDos);

                break;
            case 9:

                seguir = 'n';
                break;
        }
    printf()

    return 0;
   }
}
