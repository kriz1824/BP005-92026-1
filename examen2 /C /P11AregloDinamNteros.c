#include <stdio.h>
#include <stdlib.h>
int main() {
/*nguardaralacantidaddedatosquesedeseaalmacenar.*/
int n;
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*datosapuntaraalprimer elementodelarreglodinamico.*/
int*datos=NULL;
/*Solicitamoslacantidadde datos.*/
printf("Cuantos enteros desea guardar:");
scanf("%d",&n);
/*Reservamosmemoriaparanenteros.*/
datos=malloc(n*sizeof(int));
/*Verificamossilareservafueexitosa.*/
if(datos==NULL){
printf("No se pudo reservar memoria.\n");
 return 1;
}
/*Leemos losdatos ingresados por teclado.*/
for(i =0;i<n;i++){
printf("Ingrese datos[%d]:",i);
scanf("%d",&datos[i]);
}
/*Mostramos los datos almacenados.*/
printf("Datos ingresados:");
for(i =0;i<n;i++){
printf("%d",datos[i]);
}
printf("\n");
/*Liberamos la memoria dinamica.*/
free(datos);
/*Evitamos dejar un puntero colgante.*/
datos=NULL;
return 0;
}
