#include "funciones.h"
#include <stdio.h>

int main(){
    int x, y, resul;

    printf("x = ");
    scanf("%d",&x);
    
    printf("y = ");
    scanf("%d",&y);

    resul = mcd(x, y);

    printf("\nmcd(%d, %d) = %d", x, y, resul);

    return 0;

}