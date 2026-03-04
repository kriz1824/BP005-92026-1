include <stdio.h>

int main() {
  int x, y;
  printf("ingrese el primer numero\n");
  scanf("%d", &x);
  
  printf("ingrese el segundo numero\n");
  scanf("%d", &y); 
  if (x > y) {
    printf("el numero %d  es mayor que %d\n", x, y );
  }
  
  return 0;
}

