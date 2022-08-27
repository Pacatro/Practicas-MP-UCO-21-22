#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int inicio = 1, opcion, comprobar, nlibros, unidades;
    char nombre_fichero[100], titulo[100];
    struct libro libro, *v; 

    printf("\nIntroduzca el nombre del fichero donde guaradra los datos: ");
    scanf("%s", nombre_fichero);

    while(inicio == 1){
        menu();
        scanf("%d", &opcion);
        getchar();

        if(opcion > 0 && opcion < 7){
            
            switch(opcion){
                case 1: 
                    
                    printf("\nIntroduzca el titulo del libro: ");

                    fgets(titulo, 100, stdin);
                    
                    if(titulo[strlen(titulo)-1] == '\n'){
                        titulo[strlen(titulo)-1] = '\0';
                    }

                    comprobar = comprobar_libro(nombre_fichero, titulo);

                    if(comprobar == 1){
                        printf("\nYa hay un libro con el mismo titulo registrado.\n");

                    }

                    else{    
                        libro = nuevo_libro(titulo);
                        introducir_libro(nombre_fichero, titulo, libro);
                    }

                    system("pause");
                    system("clear");

                break;

                case 2:
                    
                    nlibros = numero_libros(nombre_fichero);
                    printf("\nHay un total de %d libros resgistrados.\n", nlibros);
                    
                    system("pause");
                    system("clear");

                break;

                case 3:
                    
                    printf("\nLibros registrados:\n");
                    mostrar_libros(nombre_fichero, v, nlibros);

                    system("pause");
                    system("clear");

                break;

                case 4:
                
                    printf("\nIntroduzca el titulo del libro que quiere vender: ");
                    fgets(titulo, 100, stdin);
                    
                    if(titulo[strlen(titulo)-1] == '\n'){
                        titulo[strlen(titulo)-1] = '\0';
                    }

                    printf("\nIntroduzca el numero de unidades que quiera vender: ");
                    scanf("%d", &unidades);

                    vender_nlibros(nombre_fichero, unidades, titulo);

                    printf("\nSe han vendido %d unidades.\n", unidades);

                    system("pause");
                    system("clear");
                    
                break;

                case 5:

                    borrarLibros_0unidades(nombre_fichero);
                    system("pause");
                    system("clear");

                break;

                case 6:
                    
                    printf("\nSaliendo...\n");
                    inicio = 0;

                break; 
            }
        }

        else{
            printf("ERROR: Opcion no valida.\n");
            system("pause");
            system("clear");

        }

    }

    return 0;

}
