#include<stdio.h>
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][3]={
{1, 2,3},
{4, 5,6}
};
/*irecorreralasfilasyjrecorreralascolumnas.*/
int i;
int j;
/*Recorremoscadafila.*/
for(i =0;i<2;i++){
/*Recorremoscadacolumnadelafilaactual.*/
for (j=0;j<3;j++) {
printf("%d",m[i][j]);
}
printf("\n");
}
return 0;
}
