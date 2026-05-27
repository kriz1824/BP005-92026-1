#include<stdio.h>
#include<stdlib.h>
int sumarMatriz(int *matriz, int filas, int columnas){
/*iy jseusaranpararecorrerlamatriz.*/
int i;
int j;
/*sumaacumularatodoslos elementos.*/
int suma=0;
/*Verificamosqueelpuntero seavalido.*/
if(matriz==NULL){
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
int *matriz=NULL;
/*Reservamosmemoriadinamica.*/
matriz =malloc(filas*columnas*sizeof(int));
/*Verificamossilareservafueexitosa.*/
if(matriz==NULL){
printf("Nosepudoreservarmemoria.\n");
return 1;
}
/*Llenamoslamatrizconvaloresdel1al6.*/
for(i =0;i<filas;i++) {
for (j=0;j<columnas; j++){
matriz[i*columnas + j]=i*columnas+j+1;
}
}
/*Mostramoslasumacalculadaporunafuncion.*/
printf("Suma= %d\n",sumarMatriz(matriz,filas,columnas));
/*Liberamoslamemoriadinamica.*/
free(matriz);
matriz =NULL;
return 0;
}
