#include<iostream>
int sumarMatriz(int *matriz, int filas, int columnas){
/*iy jseusaranpararecorrerlamatriz.*/
int i;
int j;
/*sumaacumularatodoslos elementos.*/
int suma=0;
/*Verificamosqueelpuntero seavalido.*/
if(matriz==nullptr){
return 0;
}
/*Recorremoslamatrizcomobloquelinealindexado.*/
for(i =0;i<filas;i++) {
for (j=0;j<columnas; j++){
suma=suma+matriz[i*columnas+j];
}
}
/*Devolvemoselresultadomediantereturn.*/
return suma;
}
int main() {
/*Definimoseltamanodelamatriz.*/
int filas=2;
int columnas=3;
/*Declaramosindicesyelpunterodinamico.*/
int i;
int j;
int *matriz=nullptr;
/*Reservamosmemoriadinamica.*/
matriz =new int[filas*columnas];
/* Llenamos la matriz con valores del 1 al 6. */
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
matriz[i * columnas + j] = i * columnas + j + 1;
}
}
/* Mostramos la suma calculada por una funcion. */
std::cout << "Suma = " << sumarMatriz(matriz, filas, columnas) << std::endl;
/* Liberamos la memoria dinamica. */
delete[] matriz;
matriz = nullptr;
return 0;
}
