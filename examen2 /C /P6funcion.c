#include<stdio.h>
void mostrarArreglo(int datos[],int n){

/*iseraelindiceusadopararecorrerelarreglo.*/
int i;

/*Recorremoslosnelementos recibidos.*/
for(i =0;i<n;i++){

/*Mostramoscadaelementodelarreglo.*/
printf("%d",datos[i]);

}

/*Imprimimosunsaltodelineaalfinal.*/
printf("\n");

}

int main() {

/*Declaramosunarreglode cincoenteros.*/

int datos[5]={8,3,15,6,10};

/*Enviamoselarregloysu cantidaddeelementos.*/
mostrarArreglo(datos,5);

return 0;

}
