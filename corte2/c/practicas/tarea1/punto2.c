#include <stdio.h> 

int main() { 
   int contador = 1; //cuantas veces se repite
   int numero; // almacena cada numero ingresado 
   int suma = 0; // acumulador

   while (contador <=3) {
      printf("ingrese un numero: ");
      scanf("%d", &numero);

      suma = suma + numero; // acumula el valor leido 
      contador++; // avanza al siguiente ciclo 
    }
    printf("la suma es; %d\n", suma);

    return 0;
}
