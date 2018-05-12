#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int inicializarpersonas( EPersona arraypersonas[],int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && arraypersonas != NULL)
    {
        retorno = 0;
        for(i=0; i<cant; i++)
        {
            arraypersonas[i].estado= 0;
        }
    }
    return retorno;
}

int buscarPorDni(EPersona arraypersona[],int dni,int cant)
{

    for(int i=0; i<cant; i++)
    {
        if(arraypersona[i].dni==dni&& arraypersona[i].estado==1)
        {
            return i;
        }
    }
    return -1;
}



int obtenerEspacioLibre(EPersona arraypersona[],int cant)
{
    int i;

    for(i=0;i<cant;i++)
    {
        if(arraypersona[i].estado==0)
        {
            return i;
        }
    }
    return -1;
}

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

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

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

int mostrarListado(EPersona arraypersonas[],int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && arraypersonas != NULL)
    {
        retorno = 0;
        for(i=0; i<cant; i++)
        {
            if(arraypersonas[i].estado==1)
            {

                mostrarUno(arraypersonas[i]);
            }
        }
    }
    return retorno;
}

void mostrarUno(EPersona arraypersonas)
{
     printf("\n %s - %d - %d - %d\n\n\n",arraypersonas.nombre,arraypersonas.edad,arraypersonas.estado,arraypersonas.dni);
}

void ordenaraz(EPersona arrayPersona[],int cant)
{
    EPersona auxPersona;
    for(int i=0; i <cant-1; i++)
    {
        if(arrayPersona[i].estado == 0)
        {
            continue;
        }
        for(int j=i+1; j < cant; j++)
        {
            if(arrayPersona[j].estado == 0)
            {
                continue;
            }
            if(strcmp(arrayPersona[i].nombre,arrayPersona[j].nombre) > 0)
            {
                auxPersona = arrayPersona[j];
                arrayPersona[j] = arrayPersona[i];
                arrayPersona[i] = auxPersona;

            }
        }
    }

}

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}



int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}



char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}


int alta(EPersona arraypersonas[],int cant)
{
    int retorno =-1;
    int i;
    char auxdni[50];
    char auxedad[50];
    int dni;
    int edad;
    int menores18=0;
    int de19a35=0;
    int mayor35=0;

    i=obtenerEspacioLibre(arraypersonas,cant);
    if(i>=0)
    {
        printf("Ingrese el nombre: ");
        fflush(stdin);
        gets(arraypersonas[i].nombre);
        while(esSoloLetras(arraypersonas[i].nombre)==0)
        {
            printf("ERROR! Ingrese un nombre: ");
            fflush(stdin);
            gets(arraypersonas[i].nombre);
        }

        printf("Ingrese la edad: ");
        fflush(stdin);
        gets(auxedad);
        while(esNumerico(auxedad)==0)
        {
            printf("ERROR! Ingrese una edad: ");
            fflush(stdin);
            gets(auxedad);

            int validarEdad(int edad)
            {
                if(edad>99 || edad<0)
                {
                    return 0;
                }

              return 1;
            }
        }

        edad=atoi(auxedad);
         if(edad<19)
        {
            menores18++;
        }
        else if(edad>18 || edad<36)
        {
            de19a35++;
        }
        else
        {
            mayor35++;
        }
        arraypersonas[i].edad=edad;

        printf("Ingrese el dni: ");
        fflush(stdin);
        gets(auxdni);
        while(esNumerico(auxdni)==0)
        {
            printf("ERROR! Ingrese un dni: ");
            fflush(stdin);
            gets(auxdni);
        }
        dni=atoi(auxdni);
        arraypersonas[i].dni=dni;



        arraypersonas[i].estado=1;
        retorno=0;
        mostrarListado(arraypersonas, cant);
    }
    return retorno;
}

int baja(EPersona arraypersonas[],int cant)
{
   char auxdni [235];
   int busqueda;
    char rta;
    int auxdniBaja;
    mostrarListado(arraypersonas,cant);

    getStringNumeros("\nIngrese DNI a dar de baja: ",auxdni);
    auxdniBaja=atoi(auxdni);

    busqueda=buscarPorDni(arraypersonas,auxdniBaja,cant);

     if(!busqueda)
    {
        printf("ERROR! Dni incorrecto.\n");
    }
    fflush(stdin);
    printf("¿Seguro que quiere dar de baja a esta persona? s/n \nDni:%d\nNombre:%s\nEdad:%d\n",arraypersonas[busqueda].dni,arraypersonas[busqueda].nombre,arraypersonas[busqueda].edad);
    rta=getche();

    if(rta=='s')
    {
        printf("\nBaja exitosa.\n");
        arraypersonas[busqueda].estado=0;
    }
    else
    {
        printf("\nBaja cancelada.\n");
    }



    return 0;
}
