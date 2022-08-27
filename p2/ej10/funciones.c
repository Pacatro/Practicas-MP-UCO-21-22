#include "funciones.h"

int nCaracteres(char frase[], int n, char x){

    if(n < 0){
        return 0;
    }

    else{
        if (frase[n] == x){
            return 1+nCaracteres(frase, n-1, x);
        }

        else{
            return nCaracteres(frase, n-1, x);
        }
    }

}