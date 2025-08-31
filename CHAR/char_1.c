#include <stdio.h>

int main() {
    printf("Ingresa una letra: ");
    char letra;
    scanf("%c", &letra);
    printf("La letra es: %c y su codigo ASCII es: %d\n", letra, letra);
    return 0;
}