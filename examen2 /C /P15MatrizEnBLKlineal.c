#include<stdio.h>
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][3]={
{1, 2,3},
{4, 5,6}
};
/*papuntaalprimerenterodelamatriz.*/
int*p =&m[0][0];
/*totalindicacuantoselementostienelamatriz.*/
int total=2*3;
/*krecorrelamatrizcomo unasecuencialineal.*/
int k;
/*Mostramostodosloselementosusando*(p+k).*/
for(k =0;k<total;k++) {
printf("%d",*(p+k));
}
printf("\n");
return 0;
}
