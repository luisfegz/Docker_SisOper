// Luis Felipe Gaitan Zambran0
// Punto 11: write a progam to display number 1 to 10 in octal, decimal and hexadecimal
#include <stdio.h>

int main() {
   int num;
   
   printf("Ingrese un número del 1 al 10: ");
   scanf("%d", &num);
   
   printf("Decimal: %d, Octal: %o, Hexadecimal: %X", num, num, num);
   
   return 0;
}
