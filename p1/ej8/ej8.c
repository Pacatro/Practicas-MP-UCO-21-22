#include "funciones.h"
#include <stdio.h>
#include <string.h>

int main(){

    char cad[200];
    int digitos = 0, mayus = 0, minus = 0, espacios = 0;

    printf("Introduzca una cadena: ");
    fgets(cad, 200, stdin);

    if(cad[strlen(cad)-1] == '\n'){
        cad[strlen(cad)-1] = '\0';
    }

    printf("Cadena: %s", cad);

    estadisticasCadena(cad ,&digitos, &mayus, &minus, &espacios);

    printf("\nNumero digitos = %d", digitos);
    printf("\nNumero mayus = %d", mayus);
    printf("\nNumero minus = %d", minus);
    printf("\nNumero espacios = %d", espacios);

    return 0;


}