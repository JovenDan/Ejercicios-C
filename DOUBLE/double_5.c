#include <stdio.h>
#include <math.h>

int main() {
    printf("Vamos a evaluar el numero: ");
    double numero;
    scanf("%lf", &numero);
    printf("Elevado a la potencia de: ");
    double exponente;
    scanf("%lf", &exponente);
    double resultado = pow(numero, exponente);
    printf("El resultado es: %.2f\n", resultado);
    return 0;
}