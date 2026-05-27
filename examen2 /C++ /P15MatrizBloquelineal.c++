#include<iostream>
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][3]={
{1, 2,3},
{4, 5,6}
};
/*papuntaalprimerenterodelamatriz.*/
int*p =&m[0][0];
/* total indica cuantos elementos tiene la matriz. */
int total = 2 * 3;
/* k recorre la matriz como una secuencia lineal. */
int k;
/* Mostramos todos los elementos usando *(p + k). */
for (k = 0; k < total; k++) {
std::cout << *(p + k) << " ";
}
std::cout << std::endl;
return 0;
}
