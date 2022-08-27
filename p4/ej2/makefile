ejecutar-ascendente: ej2_estudio.exe binario.txt
	./ej2_estudio.exe 1 binario.txt 

ejecutar-descendente: ej2_estudio.exe binario.txt
	./ej2_estudio.exe 2 binario.txt

funciones.o: funciones.c funciones.h
	gcc -c funciones.c

lib: funciones.o
	ar rsv lib_ej2.a funciones.o

compilar: ej2.c funciones.c funciones.h
	gcc ej2.c funciones.c -o ej2_estudio.exe



