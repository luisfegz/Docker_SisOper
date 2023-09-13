// Luis Felipe Gaitan Zambrano
// Punto 5: Write a program in c to find even odd numbers
#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d es un número par.", num);
    else
        printf("%d es un número impar.", num);
    return 0;
}
