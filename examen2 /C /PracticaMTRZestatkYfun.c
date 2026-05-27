#include<stdio.h>
#define COLUMNAS 3
void mostrarMatriz(int m[][COLUMNAS], int filas){
/* irecorrerafilasyjrecorreracolumnas. */
int i;
int j;
/* Mostramoscadaelementode lamatriz. */
for(i =0;i<filas;i++) {
for (j=0;j<COLUMNAS; j++){
printf("%d",m[i][j]);
}
printf("\n");
}
}
int sumarMatriz(int m[][COLUMNAS],int filas){
/*irecorrerafilasyjrecorreracolumnas.*/
int i;
int j;
/*sumaacumularaloselementos.*/
int suma=0;
/*Sumamostodosloselementos.*/
for(i =0;i<filas;i++) {
for (j=0;j<COLUMNAS; j++){
suma=suma+m[i][j];
}
}
return suma;
}
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][COLUMNAS]={
{1, 2,3},
{4, 5,6}
};
/*Mostramoslamatriz.*/
mostrarMatriz(m,2);
/*Mostramoslasumadesus elementos.*/
printf("Suma= %d\n",sumarMatriz(m,2));
return 0;
}
