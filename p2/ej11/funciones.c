#include "funciones.h"

int sumaDigitos(int num){
    
    if(num == 0){
        return 0;
    }

    else{
        return num%10+sumaDigitos(num/10);
    }
}