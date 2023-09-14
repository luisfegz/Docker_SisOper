// Luis Felipe Gaitan Zambrano
// Punto 10: Write a program in c to type casting implicit explicit
#include <stdio.h>

int main() {
   double num1, num2, num3, max;
   
   printf("Ingrese tres números separados por espacios: ");
   scanf("%lf %lf %lf", &num1, &num2, &num3);
   
   if (num1 >= num2 && num1 >= num3)
      max = num1;
   
   if (num2 >= num1 && num2 >= num3)
      max = num2;
   
   if (num3 >= num1 && num3 >= num2)
      max = num3;
   
   printf("El número más grande es: %.2f", max);
   
   return 0;
}
