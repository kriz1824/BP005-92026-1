#include<iostream>
void incrementarTodos(int*datos, int n){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosqueelpuntero seavalido.*/
if(datos==nullptr){
return;
}
/*Recorremoselarregloyaumentamoscadaelementoenunaunidad.*/
for(i =0;i<n;i++){
datos[i]=datos[i]+1;
}
}
void mostrarArreglo(int*datos, int n){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Recorremoselarreglopara mostrarsuselementos.*/

for(i =0;i<n;i++){
std::cout<<datos[i]<<"";
}
std::cout<<std::endl;
}
int main() {
/*Declaramosunarreglode cincoenteros.*/
int datos[5]={8,3,15,6,10};
/*Mostramoselarregloantes delcambio.*/
std::cout<<"Antes:";
mostrarArreglo(datos,5);
/*Modificamoselarreglooriginaldesdeunafuncion.*/
incrementarTodos(datos,5);
/*Mostramoselarreglodespuesdelcambio.*/
std::cout<<"Despues:";
mostrarArreglo(datos,5);
return 0;
}
