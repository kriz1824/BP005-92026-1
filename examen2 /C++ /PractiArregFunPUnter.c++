#include<iostream>
void leerArreglo(int*datos,int n){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosqueelpuntero seavalido.*/
if(datos==nullptr){
return;
}
/*Leemoscadaelementodel arreglo.*/
for(i =0;i<n;i++){
std::cout<<"Ingresedatos["<<i<<"]:";
std::cin>>datos[i];
}
}
void mostrarArreglo(int*datos, int n){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosqueelpuntero seavalido.*/
if(datos==nullptr){
return;
}
/*Mostramoscadaelementodelarreglo.*/
for(i =0;i<n;i++){
std::cout<<datos[i]<<"";
}
std::cout<<std::endl;
}
void analizarArreglo(int*datos,int n,int*suma,float*promedio){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosquelasdireccionesseanvalidas.*/
if(datos==nullptr||suma==nullptr||promedio==nullptr){
return;
}
/*Inicializamoslasuma.*/
*suma=0;
/*Acumulamostodosloselementos.*/
for(i =0;i<n;i++){
*suma=*suma+datos[i];
}
/*Calculamoselpromedio.*/
*promedio=static_cast<float>(*suma)/n;
}
int main() {
/*Declaramosunarreglode cincoenteros.*/
int datos[5];
/*Variablespararesultados. */
int suma;
float promedio;
/*Leemos,mostramosyanalizamoselarreglo.*/
leerArreglo(datos,5);
mostrarArreglo(datos,5);
analizarArreglo(datos,5,&suma,&promedio);
/*Mostramoslosresultados.*/
std::cout<<"Suma="<<suma<<std::endl;
std::cout<<"Promedio="<< promedio<<std::endl;
return 0;
}
