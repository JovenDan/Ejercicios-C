#include <stdio.h>

int main() {
    printf("Ingrese un numero cualquiera");
    int a;
    scanf("%d", &a);
    int parimp;
    parimp = a % 2;
    if (parimp == 0) {
        printf("El numero es par\n");
    } else {
        printf("El numero es impar\n");
    }
}