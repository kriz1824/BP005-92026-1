#include<iostream>
const int COLUMNAS = 3;
void mostrarMatriz(int m[][COLUMNAS],int filas){
/*irecorrerafilasyjrecorreracolumnas.*/
int i;
int j;
/*Mostramoscadaelementode lamatriz.*/
for(i =0;i<filas;i++) {
for (j=0;j<COLUMNAS; j++){
std::cout<<m[i][j]<<"";
}
std::cout<<std::endl;
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
/* Declaramos una matriz de 2 filas y 3 columnas. */
int m[2][COLUMNAS] = {
{1, 2, 3},
{4, 5, 6}
};
/* Mostramos la matriz. */
mostrarMatriz(m, 2);
/* Mostramos la suma de sus elementos. */
std::cout << "Suma = " << sumarMatriz(m, 2) << std::endl;
return 0;
}
