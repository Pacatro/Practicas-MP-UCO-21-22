#include "funciones.h"
#include <stdio.h>
#include <string.h>

int main(){
    char nombre_origen[200], nombre_mayus[] = "mayusculas-nombreFicheroDeEntrada.txt";

    printf("Nombre fichero original: ");
    scanf("%s", nombre_origen);

    ficheroMayus(nombre_origen, nombre_mayus);
}