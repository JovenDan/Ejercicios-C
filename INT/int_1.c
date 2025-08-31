#include <stdio.h>

int main() {
    printf("Ingrese el primer numero de la suma ");
    int a;
    scanf("%d", &a);
    printf("Ingrese el segundo numero de la suma ");
    int b;
    scanf("%d", &b);
    int suma = a + b;
    printf("El resultado de la suma es: %d\n", suma);
    return 0;
}