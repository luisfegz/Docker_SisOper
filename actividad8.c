// Luis Felipe Gaitan Zambrano
// Punto 8: Write a program in C to function to check lowercase letter
#include <stdio.h>
#include <ctype.h>

int main() {
   char ch;
   
   printf("Ingrese un caracter: ");
   scanf("%c", &ch);
   
   if (islower(ch)) {
      printf("%c es una letra minúscula.", ch);
   } else {
      printf("%c no es una letra minúscula.", ch);
   }
   
   return 0;
}
