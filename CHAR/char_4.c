#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];  // espacio para la palabra
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    char letra;
    printf("Ingrese la letra a buscar: ");
    scanf(" %c", &letra);

    int contador = 0;
    int i;
    for (i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra %c aparece %d veces en la palabra %s\n", letra, contador, palabra);
    return 0;
}
