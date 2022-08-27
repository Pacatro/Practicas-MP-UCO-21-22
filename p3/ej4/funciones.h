#ifndef FUNCIONES_H
#define FUNCIONES_H

    struct libro {      
        char titulo[100];
        char autor[50];
        float precio;
        int unidades;
    };

    void menu();
    struct libro nuevo_libro(char titulo[]);
    int comprobar_libro(char nombre_fichero[], char titulo[]);
    void introducir_libro(char nombre_fichero[], char titulo[], struct libro libro);
    int numero_libros(char nombre_fichero[]);
    void mostrar_libros(char nombre_fichero[], struct libro *vector, int nlibros);
    void copiar_libro(char nombre_fichero[], struct libro libro);
    void vender_nlibros(char nombre_fichero[], int unidades, char titulo[]);
    void borrarLibros_0unidades(char nombre_fichero[]);

#endif