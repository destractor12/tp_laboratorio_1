#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param arraypersona el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona arraypersona[],int cant);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param arraypersona el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona arraypersona[], int dni, int cant);

#endif // FUNCIONES_H_INCLUDED
int inicializarpersonas(EPersona arraypersona[],int cant);
int mostrarListado(EPersona arraypersonas[],int limite);
void mostrarUno(EPersona personas);
int alta(EPersona arraypersonas[],int cant);
int baja(EPersona arraypersonas[],int cant);
void ordenaraz(EPersona arraypersonas[],int cant);
int validarEdad(int edad);
int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);


int esNumerico(char str[]) ;
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
