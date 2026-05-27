#include <iostream>

using namespace std;

void leerArreglo(int *datos, int n);
void mostrarArreglo(int *datos, int n);
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor);

void leerMatriz(int *matriz, int filas, int columnas);
void mostrarMatriz(int *matriz, int filas, int columnas);
int sumarMatriz(int *matriz, int filas, int columnas);

int main() {
    int n;
    int *datos = nullptr;

    int suma = 0, mayor, menor;

    int filas, columnas;
    int *matriz = nullptr;
    int sumaMatriz;

    /* ARREGLO */

    cout << "Cantidad de datos del arreglo: ";
    cin >> n;

    datos = new int[n];

    leerArreglo(datos, n);

    cout << "\nArreglo: ";
    mostrarArreglo(datos, n);

    analizarArreglo(datos, n, &suma, &mayor, &menor);

    cout << "Suma = " << suma << endl;
    cout << "Mayor = " << mayor << endl;
    cout << "Menor = " << menor << endl;

    /* MATRIZ */

    cout << "\nFilas de la matriz: ";
    cin >> filas;

    cout << "Columnas de la matriz: ";
    cin >> columnas;

    matriz = new int[filas * columnas];

    leerMatriz(matriz, filas, columnas);

    cout << "\nMatriz:\n";
    mostrarMatriz(matriz, filas, columnas);

    sumaMatriz = sumarMatriz(matriz, filas, columnas);

    cout << "\nSuma de la matriz = " << sumaMatriz << endl;

    /* LIBERAR MEMORIA */

    delete[] datos;
    datos = nullptr;

    delete[] matriz;
    matriz = nullptr;

    cout << "Memoria liberada correctamente." << endl;

    return 0;
}

/* FUNCIONES DEL ARREGLO */

void leerArreglo(int *datos, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos[" << i << "]: ";
        cin >> datos[i];
    }
}

void mostrarArreglo(int *datos, int n) {
    for (int i = 0; i < n; i++) {
        cout << datos[i] << " ";
    }

    cout << endl;
}

void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    for (int i = 0; i < n; i++) {
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
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese m[" << i << "][" << j << "]: ";
            cin >> matriz[i * columnas + j];
        }
    }
}

void mostrarMatriz(int *matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i * columnas + j] << " ";
        }

        cout << endl;
    }
}

int sumarMatriz(int *matriz, int filas, int columnas) {
    int suma = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i * columnas + j];
        }
    }

    return suma;
}
