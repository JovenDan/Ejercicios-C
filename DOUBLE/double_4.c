#include <stdio.h>

int main() {
    printf("Ingrese el numero a analizar: ");
    double numero;
    scanf("%lf", &numero);
    if (numero < 0) {
        printf("El numero es negativo\n");
    } else if (numero > 0) {
        printf("El numero es positivo\n");
    } else {
        printf("El numero es cero\n");
    }
    return 0;
}