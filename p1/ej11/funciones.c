#include "funciones.h"
#include <string.h>

int es_prefijo(char *cadena, char *prefijo){
    char *pre = strstr(cadena, prefijo);

    if(pre == cadena){
        return 1;
    }    

    return 0;
}
