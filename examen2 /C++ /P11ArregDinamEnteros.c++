#include<iostream>
int main() {
/*nguardaralacantidaddedatosquesedeseaalmacenar.*/
int n;
/*iseraelindiceusadopararecorrerelarreglo.*/
int i;
/*datosapuntaraalprimer elementodelarreglodinamico.*/
int*datos=nullptr;
/*Solicitamoslacantidadde datos.*/
std::cout<<"Cuantosenteros deseaguardar:";
std::cin>>n;
/*Reservamosmemoriaparanenteros.*/
datos=new int[n];
/*Leemoslosdatosingresadosporteclado.*/
for(i =0;i<n;i++){
std::cout<<"Ingresedatos["<<i<<"]:";
std::cin>>datos[i];
}
/*Mostramoslosdatosalmacenados.*/
std::cout<<"Datosingresados:";
for(i =0;i<n;i++){
std::cout<<datos[i]<<"";
}
std::cout<<std::endl;
/*Liberamoslamemoriadinamica.*/
delete[]datos;
/*Evitamosdejarunpunterocolgante.*/
datos=nullptr;
return 0;
}
