#include<iostream>
void mostrarArreglo(int *datos, int n){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosqueelpuntero noseanulo.*/
if(datos==nullptr){
std::cout<<"Elarreglonoesvalido."<<std::endl;
return;
}

/*Recorremoslosnelementos usandonotaciondeindice.*/
for(i =0;i<n;i++){
std::cout<<datos[i]<<"";
}
std::cout<<std::endl;
}
int main() {

/*Declaramosunarreglode cincoenteros.*/
int datos[5]={8,3,15,6,10};

/*Enviamoselarregloysu cantidaddeelementos.*/
mostrarArreglo(datos,5);
return 0;
}
