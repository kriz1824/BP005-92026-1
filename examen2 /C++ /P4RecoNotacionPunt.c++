#include<iostream>
int main() {
/*Declaramosunarreglode cincoenteros.*/
int datos[5]={8,3,15,6,10};
/*papuntaalprimerelementodelarreglo.*/
int*p =datos;
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Recorremoselarreglousandoaritmeticadepunteros.*/
for(i =0;i<5;i++){
/**(p+i)accedealelementoubicadoiposicionesdespuesdep.*/
std::cout<<"Elemento"<<i<<"="<<*(p+i)<<std::endl;
}
return 0;
}
