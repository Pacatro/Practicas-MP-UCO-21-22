#include "funciones.h"
#include <stdio.h>

int main(){
    int num, suma;

    printf("Numero --> ");
    scanf("%d", &num);

    suma = sumaDigitos(num);
    printf("Suma digitos --> %d", suma);

    return 0;
     
}