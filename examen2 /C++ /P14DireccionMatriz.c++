#include<iostream>
int main() {
/*Declaramosunamatrizde 2 filasy3columnas.*/
int m[2][3]={
{1, 2,3},
{4, 5,6}
};
/*irecorrerafilasyjrecorreracolumnas.*/
int i;
int j;
/*Mostramosladirecciondecadaelemento.*/
for(i =0;i<2;i++){
for (j=0;j<3;j++) {
std::cout<<"&m["<< i<<"]["<<j<<"]="
<<static_cast<const void*>(&m[i][j])
<<std::endl;
}
}
return 0;
}
