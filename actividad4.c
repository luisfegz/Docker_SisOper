// Luis Felipe Gaitan Zambrano 
// Punto 4: Write a program in C to calculate power using recursion

#include <stdio.h>

int power(int base, int exponent);

int main() {
    int base, exponent, result;
    printf("Introduzca el número de base: ");
    scanf("%d", &base);
    printf("Introduzca el número de exponente (entero positivo): ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%d^%d = %d", base, exponent, result);
    return 0;
}

int power(int base, int exponent) {
    if (exponent != 0)
        return (base * power(base, exponent - 1));
    else
        return 1;
}
