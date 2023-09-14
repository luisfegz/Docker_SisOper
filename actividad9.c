// Luis Felipe Gaitan Zambrano
// Punto 9: Find the greater of three numbers
#include <stdio.h>

int main() {
   double num1, num2, num3;
   
   printf("Ingrese tres números separados por espacios: ");
   scanf("%lf %lf %lf", &num1, &num2, &num3);
   
   if (num1 >= num2 && num1 >= num3)
      printf("%.2f es el número más grande.", num1);
   
   if (num2 >= num1 && num2 >= num3)
      printf("%.2f es el número más grande.", num2);
   
   if (num3 >= num1 && num3 >= num2)
      printf("%.2f es el número más grande.", num3);
   
   return 0;
}
