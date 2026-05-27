#include<stdio.h>
void analizarArreglo(int*datos,int n,int*suma,int*mayor,int*menor){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosquelasdireccionesrecibidasseanvalidas.*/
if(datos==NULL||suma==NULL||mayor==NULL||menor==NULL){
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
/*Enviamoselarreglo,sutamanoylasdireccionesdesalida.*/
analizarArreglo(datos,5,&suma,&mayor,&menor);
/*Mostramoslosresultados calculadosporlafuncion.*/
printf("Suma = %d\n",suma);
printf("Mayor= %d\n",mayor);
printf("Menor= %d\n",menor);
return 0;
}
