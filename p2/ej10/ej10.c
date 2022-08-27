#include "funciones.h"
#include <stdio.h>
#include <string.h>

#define N 200

int main(){
    char frase[N];
    char x;
    int resul;

    printf("Introduzca la frase: ");
    fgets(frase, N, stdin);
    if(frase[strlen(frase)-1] == '\n'){
        frase[strlen(frase)-1] = '\0';
    }

    
    printf("Introduzca el caracter: ");
    scanf("%c", &x);
    getchar();

    resul = nCaracteres(frase, N, x);
    printf("Numero de veces que aparece '%c' en la frase = %d", x, resul);
    
    return 0;
}