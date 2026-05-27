#include <stdio.h>
#include <stdlib.h>

void leerArreglo(int *datos, int n);
void mostrarArreglo(int *datos, int n);
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor);

void leerMatriz(int *matriz, int filas, int columnas);
void mostrarMatriz(int *matriz, int filas, int columnas);
int sumarMatriz(int *matriz, int filas, int columnas);

int main() {
    int n;
    int *datos = NULL;

    int suma = 0, mayor, menor;

    int filas, columnas;
    int *matriz = NULL;
    int sumaMatriz;

    /* ARREGLO */

    printf("Cantidad de datos del arreglo: ");
    scanf("%d", &n);

    datos = (int *)malloc(n * sizeof(int));

    if (datos == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    leerArreglo(datos, n);

    printf("\nArreglo: ");
    mostrarArreglo(datos, n);

    analizarArreglo(datos, n, &suma, &mayor, &menor);

    printf("Suma = %d\n", suma);
    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);

    /* MATRIZ */

    printf("\nFilas de la matriz: ");
    scanf("%d", &filas);

    printf("Columnas de la matriz: ");
    scanf("%d", &columnas);

    matriz = (int *)malloc(filas * columnas * sizeof(int));

    if (matriz == NULL) {
        printf("Error al reservar memoria.\n");

        free(datos);
        datos = NULL;

        return 1;
    }

    leerMatriz(matriz, filas, columnas);

    printf("\nMatriz:\n");
    mostrarMatriz(matriz, filas, columnas);

    sumaMatriz = sumarMatriz(matriz, filas, columnas);

    printf("\nSuma de la matriz = %d\n", sumaMatriz);

    /* LIBERAR MEMORIA */

    free(datos);
    datos = NULL;

    free(matriz);
    matriz = NULL;

    printf("Memoria liberada correctamente.\n");

    return 0;
}

/* FUNCIONES DEL ARREGLO */

void leerArreglo(int *datos, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("Ingrese datos[%d]: ", i);
        scanf("%d", &datos[i]);
    }
}

void mostrarArreglo(int *datos, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }

    printf("\n");
}

void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    int i;

    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    for (i = 0; i < n; i++) {
        *suma += datos[i];

        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }

        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

/* FUNCIONES DE LA MATRIZ */

void leerMatriz(int *matriz, int filas, int columnas) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese m[%d][%d]: ", i, j);
            scanf("%d", &matriz[i * columnas + j]);
        }
    }
}

void mostrarMatriz(int *matriz, int filas, int columnas) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i * columnas + j]);
        }

        printf("\n");
    }
}

int sumarMatriz(int *matriz, int filas, int columnas) {
    int i, j;
    int suma = 0;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            suma += matriz[i * columnas + j];
        }
    }

    return suma;
}
