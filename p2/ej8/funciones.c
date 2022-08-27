#include "funciones.h"


int mcd(int x, int y){
    if(y == 0){
        return x;
    }

    else{
        if(x>=y){
            return mcd(y, x%y);
        }
    }
}