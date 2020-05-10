/* Nombre Fichero: include/argumentos.h */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Declaracion de los prototipos de las funciones


/* Funcion que lee los argumentos introducidos y convierte a entero lo pasado como primer argumento
 * [ IN] argc, numero de argumentos 
 * [ IN] argv, array de punteros a cadenas de caracteres que contiene los argc argumentos
 * [OUT] op, puntero a un entero que se rellenará con el entero que se lea en la posición argv[1]
 * [RET] void */

void leerArgs(int argc, char **argv, int *op);

