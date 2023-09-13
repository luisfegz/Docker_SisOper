// Luis Felipe Gaitan Zambrano
// Punto 7: Write a function to check uppercase letter
#include <stdio.h>
#include <ctype.h>

int main() {
   char ch;
   
   printf("Ingrese un caracter: ");
   scanf("%c", &ch);
   
   if (isupper(ch)) {
      printf("%c es una letra mayúscula.", ch);
   } else {
      printf("%c no es una letra mayúscula.", ch);
   }
   
   return 0;
}
