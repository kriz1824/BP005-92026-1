#include<stdio.h>
void incrementarTodos(int*datos, int n){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosqueelpuntero seavalido.*/
if(datos==NULL){
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
printf("%d",datos[i]);
}
printf("\n");

}
int main() {
/*Declaramosunarreglode cincoenteros.*/
int datos[5]={8,3,15,6,10};
/*Mostramoselarregloantes delcambio.*/
printf("Antes:");
mostrarArreglo(datos,5);
/*Modificamoselarreglooriginaldesdeunafuncion.*/
incrementarTodos(datos,5);
/*Mostramoselarreglodespuesdelcambio.*/
printf("Despues:");
mostrarArreglo(datos,5); 

return 0;

}
