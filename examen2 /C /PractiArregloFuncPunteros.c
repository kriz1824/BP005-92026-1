#include <stdio.h>
void leerArreglo(int *datos, int n) {
/* i sera el indice usado para recorrer el arreglo. */
int i;
/* Verificamos que el puntero sea valido. */
if (datos == NULL) {
return;
}
/* Leemos cada elemento del arreglo. */
for (i = 0; i < n; i++) {
printf("Ingrese datos[%d]: ", i);
scanf("%d", &datos[i]);
}
}
void mostrarArreglo(int *datos, int n) {
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosqueelpuntero seavalido.*/
if(datos==NULL){
return;
}
/*Mostramoscadaelementodelarreglo.*/
for(i =0;i<n;i++){
printf("%d",datos[i]);
}
printf("\n");
}
void analizarArreglo(int*datos,int n,int*suma,float*promedio){
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*Verificamosquelasdireccionesseanvalidas.*/
if(datos==NULL||suma==NULL||promedio==NULL){
return;
}
/*Inicializamoslasuma.*/
*suma=0;
/*Acumulamostodosloselementos.*/
for(i =0;i<n;i++){
*suma=*suma+datos[i];
}
/*Calculamoselpromedio.*/
*promedio=(float)(*suma)/n;
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
printf("Suma= %d\n",suma);
printf("Promedio= %.2f\n", promedio);
return 0;
}
