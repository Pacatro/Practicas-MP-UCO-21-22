#include "funciones.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void estadisticasCadena(char cad[], int *digitos, int *mayus, int *minus, int *espacios){
   
    int len = strlen(cad);

    for(int i = 0; i<len; i++){
        if(isdigit(cad[i])){
            (*digitos)++;
        }

        else if(isupper(cad[i])){
            (*mayus)++;
        }

        else if(islower(cad[i])){
            (*minus)++;
        }

        else if(isspace(cad[i])){
            (*espacios)++;
        }
    }

}
