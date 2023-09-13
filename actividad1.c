// Luis Felipe GaitanZambrao
// Punto 1: Write a program in c to find prime number or not
#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    // 0 y 1 no son números primos
    // cambia la bandera a 1 para números no primos
    if (n == 0 || n == 1)
        flag = 1;
    for (i = 2; i <= n / 2; ++i) {
        // si n es divisible por i, entonces n no es primo
        // cambia la bandera a 1 para números no primos
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    // la bandera es 0 para números primos
    if (flag == 0)
        printf("%d es un número primo.", n);
    else
        printf("%d no es un número primo.", n);
    return 0;
}
