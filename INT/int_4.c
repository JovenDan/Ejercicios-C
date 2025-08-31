#include <stdio.h>

int main() {
    printf("Ingrese el primer numero a comparar: ");
    int a;
    scanf("%d", &a);
    printf("Ingrese el segundo numero a comparar: ");
    int b;
    scanf("%d", &b);
    printf("Ingrese el tercer numero a comparar: ");
    int c;
    scanf("%d", &c);
    if (a >= b && a >= c) {
        printf("El numero mayor es: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("El numero mayor es: %d\n", b);
    } else {
        printf("El numero mayor es: %d\n", c);
    }
}