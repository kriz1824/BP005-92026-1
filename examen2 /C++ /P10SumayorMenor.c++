#include<iostream>
void analizarArreglo(int*datos,int n,int*suma,int*mayor,int*menor){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosquelasdireccionesrecibidasseanvalidas.*/
if(datos==nullptr||suma==nullptr||mayor==nullptr||menor==nullptr
){
return;
}
/*Inicializamoslasumaen cero.*/
*suma=0;
/*Tomamoselprimerelemento comoreferenciainicial.*/
*mayor =datos[0];
*menor =datos[0];
/*Recorremoselarreglocompleto.*/
for(i =0;i<n;i++){
/*Acumulamoselelemento actualenlasuma.*/
*suma=*suma+datos[i];
/*Actualizamoselmayorsiapareceunvalormasgrande.*/
if(datos[i]>*mayor){
*mayor=datos[i];
}
/*Actualizamoselmenorsiapareceunvalormaspequeno.*/
if(datos[i]<*menor){
*menor=datos[i];
}
}
}
int main() {
/*Declaramosunarreglode cincoenteros.*/
int datos[5]={8,3,15,6,10};
/*Declaramoslasvariables dondeseguardaranlosresultados.*/
int suma;
int mayor;
int menor;
/* Enviamos el arreglo, su tamano y las direcciones de salida. */
analizarArreglo(datos, 5, &suma, &mayor, &menor);
/* Mostramos los resultados calculados por la funcion. */
std::cout << "Suma = " << suma << std::endl;
std::cout << "Mayor = " << mayor << std::endl;
std::cout << "Menor = " << menor << std::endl;
return 0;
}
