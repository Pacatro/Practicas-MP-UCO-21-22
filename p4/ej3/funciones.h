#ifndef FUNCIONES_H
#define FUNCIONES_H

    struct alumno {
        char nombre[50];
        int DNI;
        float nota;
    };

    void reservar_vector(struct alumno **v, int n);
    void imprimir_vector(struct alumno *v, int n);
    long tamano(char nombre_fichero[]);
    void fichero_vector(char nombre_fichero[], struct alumno *v, int n);
    int mayor_enteros(const void *a, const void *b);
    int menor_enteros(const void *a, const void *b);
    

#endif