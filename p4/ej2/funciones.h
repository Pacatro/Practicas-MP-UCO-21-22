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
    int mayor(int a, int b);
    int menor(int a, int b);
    void ordenar_DNI(struct alumno *v, int n, int (*pf) (int, int));


#endif