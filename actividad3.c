// Luis Felipe Gaitan Zambrano
// Punto 3: Write a program to calculate factorial of a number
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Ingresa un entero: ");
    scanf("%d", &n);
    if (n < 0)
        printf("¡Error! Factorial de un número negativo no existe.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial de %d = %llu", n, fact);
    }
    return 0;
}
