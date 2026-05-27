#include<iostream>
const int COLUMNAS = 3;
void mostrarMatriz(int m[][COLUMNAS], int filas){
/*irecorreralasfilasyjrecorreralascolumnas.*/
int i;
int j;
/*Recorremoscadaelemento delamatriz.*/
for(i =0;i<filas;i++) {
for (j=0;j<COLUMNAS; j++){
std::cout<<m[i][j]<<"";
}
std::cout<<std::endl;
}
}
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][COLUMNAS]={
{1, 2,3},
{4, 5,6}
};
/*Enviamoslamatrizyelnumerodefilas.*/
mostrarMatriz(m,2);
return 0;
}
