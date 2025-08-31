#include <stdio.h>

int main() {
    int n = 1000;
    double pi = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        double termino = 1.0 / (2 * i + 1);
        if (i % 2 == 0) {
            pi += termino;
        } else {
            pi -= termino;
        }
    }

    pi = pi * 4;
    printf("Valor aproximado de PI: %.15f\n", pi);

    return 0;
}
