// Luis Felipe Gaitan Zambrano
// Punto 6: Write a program in c to print fibonacci series

#include <stdio.h>

int main() {
    int i, n;
    // inicializar los dos primeros términos
    int t1 = 0, t2 = 1;
    // inicializar el siguiente término (tercer término)
    int siguienteTermino = t1 + t2;
    // obtener el número de términos del usuario
    printf("Ingrese el número de términos: ");
    scanf("%d", &n);
    // imprimir los dos primeros términos t1 y t2
    printf("Serie de Fibonacci: %d, %d, ", t1, t2);
    // imprimir del tercer al n-ésimo término
    for (i = 3; i <= n; ++i) {
        printf("%d, ", siguienteTermino);
        t1 = t2;
        t2 = siguienteTermino;
        siguienteTermino = t1 + t2;
    }
    return 0;
}
