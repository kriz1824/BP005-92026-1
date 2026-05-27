#include <stdio.h>
#include <stdlib.h>
int main() {
/* filas y columnas definen el tamano de la matriz. */
int filas = 2;
int columnas = 3;
/* i y j se usaran para recorrer filas y columnas. */
int i;
int j;
/* matriz apuntara al primer elemento del bloque dinamico. */
int *matriz = NULL;
/* Reservamos memoria para filas * columnas enteros. */
matriz = malloc(filas * columnas * sizeof(int));
/*Verificamossilareservafueexitosa.*/
if(matriz==NULL){
printf("Nosepudoreservarmemoria.\n");
return 1;
}
/*Llenamoslamatrizconvaloressencillos.*/
for(i =0;i<filas;i++) {
for (j=0;j<columnas; j++){
matriz[i*columnas + j]=(i+1)*10+j;
}
}
/*Mostramoslamatrizusando laformulai*columnas+j.*/
for(i =0;i<filas;i++) {
for (j=0;j<columnas; j++){
printf("%d",matriz[i*columnas+j]);
}
printf("\n");
}
/*Liberamoslamemoriadinamica.*/
free(matriz);
/*Evitamosdejarunpunterocolgante.*/
matriz =NULL;
return 0;
}
