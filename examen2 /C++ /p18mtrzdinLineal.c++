#include<iostream>
int main() {
/*filasycolumnasdefinen eltamanodelamatriz.*/
int filas=2;
int columnas=3;
/*iy jseusaranpararecorrerfilasycolumnas.*/
int i;
int j;
/*matrizapuntaraalprimerelementodelbloquedinamico.*/
int*matriz=nullptr;
/*Reservamosmemoriaparafilas*columnasenteros.*/
matriz =new int[filas*columnas];
/*Llenamoslamatrizconvaloressencillos.*/
for(i =0;i<filas;i++) {
for (j=0;j<columnas; j++){
matriz[i*columnas + j]=(i+1)*10+j;
}
}
/*Mostramoslamatrizusando laformulai*columnas+j.*/
for(i =0;i<filas;i++) {
for (j=0;j<columnas; j++){
std::cout<<matriz[i *columnas+j]<<"";
}
std::cout<<std::endl;
}
/*Liberamoslamemoriadinamica.*/
delete[]matriz;
/*Evitamosdejarunpunterocolgante.*/
matriz =nullptr;
return 0;
}
