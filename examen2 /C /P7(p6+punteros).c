#include<stdio.h>
void mostrarArreglo(int *datos, int n){
    
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;

/*Verificamosqueelpuntero noseanulo.*/
if(datos==NULL){
printf("Elarreglonoesvalido.\n");
return;
}

/*Recorremoslosnelementos usandonotaciondeindice.*/
for(i =0;i<n;i++){
printf("%d",datos[i]);
}
printf("\n");
}
int main() {

/*Declaramosunarreglode cincoenteros.*/
int datos[5]={8,3,15,6,10};

/*Enviamoselarregloysu cantidaddeelementos.*/
mostrarArreglo(datos,5);

return 0;

}
