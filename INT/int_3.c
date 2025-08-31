#include <stdio.h>

int main() {
    printf("Ingrese el numero al cual hallar su factorial: ");
    int f;
    scanf("%d", &f);
    int factorial = 1;
    int i;
    for (i = 1; i <= f; i++) {
        factorial = factorial * i;
    }
    printf("El factorial de %d es %d\n", f, factorial);
    return 0;
}