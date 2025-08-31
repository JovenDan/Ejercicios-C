#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    double d;
    double e;
    printf("Ingrese cinco numeros con decimales:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    double promedio = (a + b + c + d + e) / 5.0;
    printf("El promedio es: %.2f\n", promedio);
}