#include<stdio.h>
#define COLUMNAS 3
void incrementarMatriz(int m[][COLUMNAS], int filas){
/*irecorreralasfilasyjrecorreralascolumnas.*/
int i;
int j;
/*Aumentamoscadaelemento delamatrizenunaunidad.*/
for(i =0;i<filas;i++) {
for (j=0;j<COLUMNAS; j++){
m[i][j]=m[i][j]+ 1;
}
}
}
void mostrarMatriz(int m[][COLUMNAS], int filas){
/*irecorreralasfilasyjrecorreralascolumnas.*/
int i;
int j;
/*Mostramoslamatrizenformadetabla.*/
for(i =0;i<filas;i++) {
for (j=0;j<COLUMNAS; j++){
printf("%d",m[i][j]);
}
printf("\n");
}
}
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][COLUMNAS]={
{1, 2,3},
{4, 5,6}
};
/*Mostramoslamatrizantesdelcambio.*/
printf("Antes:\n");
mostrarMatriz(m,2);
/*Modificamoslamatrizoriginaldesdeunafuncion.*/
incrementarMatriz(m,2);
/*Mostramoslamatrizdespuesdelcambio.*/
printf("Despues:\n");
mostrarMatriz(m,2);
return 0;
}
