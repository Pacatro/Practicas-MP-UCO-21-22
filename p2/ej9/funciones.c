#include "funciones.h"

int div(int x, int y){
    int cont = 0;
    if(y > x){
        return 0;
    }

    else{
        return div(x-y, y)+1;  
    }
}