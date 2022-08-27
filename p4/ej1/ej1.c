#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    int inicio = 1, opcion, N;
    char f[] = "3*e^x-2x", g[] = "-x*sin(x)+1.5", z[] = "x^3-2x+1"; 
    float media;

    while(inicio == 1){
        printf("\nSeleccione una funcion.");
        
        printf("\n\t1) f(x) = %s", f);
        printf("\n\t2) g(x) = %s", g);
        printf("\n\t3) z(x) = %s", z);
        printf("\n\t4) Salir.");

        printf("\nFuncion: ");
        scanf("%d", &opcion);

        if(opcion < 1 || opcion > 4){
            printf("\nOpcion incorrecta.");
            system("pause");
            system("cls");
        }

        switch(opcion){
            case 1:

                printf("\nf(x) = %s", f);
                printf("\nIntroduce el maximo del rango a evaluar: ");
                scanf("%d", &N);

                media = media_funcion(N, &evaluar_f);

                printf("\nMedia de f(x): %f\n", media);
                system("pause");
                system("cls");

            break;
            
            case 2:
            
                printf("\ng(x) = %s", g);
                printf("\nIntroduce el maximo del rango a evaluar: ");
                scanf("%d", &N);

                media = media_funcion(N, &evaluar_g);

                printf("\nMedia de g(x): %f\n", media);
                system("pause");
                system("cls");

            break;

            case 3:

                printf("\nz(x) = %s", z);
                printf("\nIntroduce el maximo del rango a evaluar: ");
                scanf("%d", &N);

                media = media_funcion(N, &evaluar_z);

                printf("\nMedia de z(x): %f\n", media);
                system("pause");
                system("cls");

            break;

            case 4:

                inicio = 0;

            break;
        }

    }

}