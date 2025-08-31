#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);

    if (isdigit(c)) {
        printf("Es un numero.\n");
    } 
    else if (isalpha(c)) {
        printf("Es una letra.\n");
    }
    return 0;
}