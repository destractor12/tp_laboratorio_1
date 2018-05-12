#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<strings.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
#define TAM 20




int main()
{
    EPersona personas [TAM];



    char seguir='s';
    int opcion=0;


    inicializarpersonas(personas,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                alta(personas,TAM);

                break;
            case 2:
                 baja(personas,TAM);

                break;
            case 3:
                    ordenaraz(personas,TAM);

                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
