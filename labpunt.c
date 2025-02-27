/****************************************************************
*pontificcia universidad javeriana
fecha 27 de feb 
autor: daniel hoyos
materia: sistemas operativos
temas: Laboratorio punteros
******************************************************************/


#include <stdio.h>
#include <stdlib.h>

//a la hora de ingresar datos, ingresar 3 enteros y 2 doubles en ese orden

// Función para sumar dos números enteros
void sumarEnteros(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
    printf("Suma de enteros: %d + %d = %d\n", *a, *b, *resultado);
}

// Función para multiplicar dos números double
void multiplicarDoubles(double *a, double *b, double *resultado) {
    *resultado = *a * *b;
    printf("Multiplicación de doubles: %.2f * %.2f = %.2f\n", *a, *b, *resultado);
}

// Función para calcular el promedio de tres números enteros
void promedioEnteros(int *a, int *b, int *c, double *resultado) {
    *resultado = (*a + *b + *c) / 3.0;
    printf("Promedio de enteros: (%d + %d + %d) / 3 = %.2f\n", *a, *b, *c, *resultado);
}

int main(int argc, char *argv[]) {
    // Verificar que se hayan ingresado exactamente 5 argumentos
    if (argc != 6) {
        printf("Uso: %s <entero1> <entero2> <entero3> <double1> <double2>\n", argv[0]);
        return 1;
    }

    // Convertir argumentos a enteros
    int entero1 = atoi(argv[1]);
    int entero2 = atoi(argv[2]);
    int entero3 = atoi(argv[3]);
    double double1 = atof(argv[4]);
    double double2 = atof(argv[5]);

    // Punteros a los valores
    int *pEntero1 = &entero1;
    int *pEntero2 = &entero2;
    int *pEntero3 = &entero3;
    double *pDouble1 = &double1;
    double *pDouble2 = &double2;

    // Variables para almacenar los resultados
    int resultadoEntero;
    double resultadoDouble;

    // Realizar cálculos
    sumarEnteros(pEntero1, pEntero2, &resultadoEntero);
    multiplicarDoubles(pDouble1, pDouble2, &resultadoDouble);
    promedioEnteros(pEntero1, pEntero2, pEntero3, &resultadoDouble);

    return 0;
}
