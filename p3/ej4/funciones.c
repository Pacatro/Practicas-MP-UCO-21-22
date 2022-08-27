#include "funciones.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu(){
    printf("\n================================================");
    printf("\n1. Nuevo libro\n"); //Comprobar si existe o no
    printf("2. Numero de libros introducidos\n"); //No puede haber titulos repetidos
    printf("3. Mostrar libros\n"); //Almacenar en un vector dinamico
    printf("4. Vender libros\n"); //Vender n unidades de libros (comprobar si hay esa cantidad)
    printf("5. Borrar registros con 0 unidades\n");
    printf("6. Salir\n");
    printf("================================================\n");
}


struct libro nuevo_libro(char titulo[]){
    
    struct libro libro;

    printf("Introduzca el autor del libro: ");
    fgets(libro.autor, 30, stdin);
    
    if(libro.autor[strlen(libro.autor)-1] == '\n'){
        libro.autor[strlen(libro.autor)-1] = '\0';
    }

    printf("Introduzca el precio del libro: ");
    scanf("%f", &libro.precio);

    printf("Introduzca el numero de unidades del libro: ");
    scanf("%d", &libro.unidades);

    return libro;
    
}


int comprobar_libro(char nombre_fichero[], char titulo[]){
    FILE *fichero;
    struct libro libro_aux;

    fichero = fopen(nombre_fichero, "r");

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    while(fgets(libro_aux.titulo, 100, fichero)!=NULL){
    
        if(libro_aux.titulo[strlen(libro_aux.titulo)-1] == '\n'){
            libro_aux.titulo[strlen(libro_aux.titulo)-1] = '\0';
        }

        if(strcmp(libro_aux.titulo, titulo) == 0){
            return 1;
        }

    }

    fclose(fichero);

    return 0;

}


void introducir_libro(char *nombre_fichero, char titulo[] ,struct libro libro){
    FILE *fichero;

    fichero = fopen(nombre_fichero, "a");
    strcpy(libro.titulo, titulo);

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    fprintf(fichero, "%s\n", libro.titulo);
    fprintf(fichero, "%s\n", libro.autor);
    fprintf(fichero, "%f %d\n", libro.precio, libro.unidades);

    fclose(fichero);

}


int numero_libros(char *nombre_fichero){
    FILE *fichero;
    int numero;
    struct libro libro;

    fichero = fopen(nombre_fichero, "r");

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    while(fgets(libro.titulo, 100, fichero)!=NULL){
    
        if(libro.titulo[strlen(libro.titulo)-1] == '\n'){
            libro.titulo[strlen(libro.titulo)-1] = '\0';
        }

        fgets(libro.autor, 30, fichero);
                
        if(libro.autor[strlen(libro.autor)-1] == '\n'){
            libro.autor[strlen(libro.autor)-1] = '\0';
        }

        fscanf(fichero, "%f %d\n", &(libro.precio),  &(libro.unidades));

        numero++;

    }

    fclose(fichero);

    return numero;

}


void mostrar_libros(char *nombre_fichero, struct libro *vector, int nlibros){
    FILE *fichero;
    struct libro libro;
    int i;

    fichero = fopen(nombre_fichero, "r");

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    vector = (struct libro*)malloc(nlibros*sizeof(struct libro));
    
    if(vector == NULL){
        printf("ERROR: No se pudo reservar la memoria.");
    }

    while(fgets(libro.titulo, 100, fichero) != NULL){
    
        if(libro.titulo[strlen(libro.titulo)-1] == '\n'){
            libro.titulo[strlen(libro.titulo)-1] = '\0';
        }

        fgets(libro.autor, 30, fichero);
                
        if(libro.autor[strlen(libro.autor)-1] == '\n'){
            libro.autor[strlen(libro.autor)-1] = '\0';
        }

        fscanf(fichero, "%f %d\n", &(libro.precio),  &(libro.unidades));

        vector[i] = libro;

        printf("\nTitulo: %s\n", libro.titulo);
        printf("Autor: %s\n", libro.autor);
        printf("Precio: %f | Unidades: %d\n", libro.precio, libro.unidades);

        i++;
    }

    free(vector);

    fclose(fichero);
}


void copiar_libro(char nombre_fichero[], struct libro libro){
    FILE *fichero;
    fichero = fopen(nombre_fichero, "a");

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    fprintf(fichero, "%s\n", libro.titulo);
    fprintf(fichero, "%s\n", libro.autor);
    fprintf(fichero, "%f %d\n", libro.precio, libro.unidades);

    fclose(fichero);

}


void vender_nlibros(char nombre_fichero[], int unidades, char titulo[]){
    FILE *fichero;
    struct libro libro;
    char nombre_aux[] = "auxiliar.txt";

    fichero = fopen(nombre_fichero, "r");

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    while(fgets(libro.titulo, 100, fichero) != NULL){
    
        if(libro.titulo[strlen(libro.titulo)-1] == '\n'){
            libro.titulo[strlen(libro.titulo)-1] = '\0';
        }

        fgets(libro.autor, 30, fichero);    
                
        if(libro.autor[strlen(libro.autor)-1] == '\n'){
            libro.autor[strlen(libro.autor)-1] = '\0';
        }

        fscanf(fichero, "%f %d\n", &(libro.precio),  &(libro.unidades));

        if(strcmp(libro.titulo, titulo) == 0){

            libro.unidades-=unidades;

            if(libro.unidades < 0){
                libro.unidades = 0;
            } 


        }

        copiar_libro(nombre_aux, libro);

    }

    fclose(fichero);

    remove(nombre_fichero);

    rename(nombre_aux, nombre_fichero);

}


void borrarLibros_0unidades(char nombre_fichero[]){
    FILE *fichero;
    struct libro libro;
    char nombre_aux[] = "auxiliar.txt";

    fichero = fopen(nombre_fichero, "r");

    if(fichero == NULL){
        fprintf(stderr, "ERROR: No se pudo abrir el fichero.");
    }

    while(fgets(libro.titulo, 100, fichero) != NULL){
    
        if(libro.titulo[strlen(libro.titulo)-1] == '\n'){
            libro.titulo[strlen(libro.titulo)-1] = '\0';
        }

        fgets(libro.autor, 30, fichero);    
                
        if(libro.autor[strlen(libro.autor)-1] == '\n'){
            libro.autor[strlen(libro.autor)-1] = '\0';
        }

        fscanf(fichero, "%f %d\n", &(libro.precio),  &(libro.unidades));

        if(libro.unidades > 0){
            
            copiar_libro(nombre_aux, libro);
        
        }


    }

    fclose(fichero);

    remove(nombre_fichero);

    rename(nombre_aux, nombre_fichero);

    printf("\nSe han eliminado todos los libros con 0 unidades.\n");

}