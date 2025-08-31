#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Ingresa una letra en minuscula: ");
    scanf(" %c", &c);
    char upper = toupper(c);
    printf("La letra en mayuscula es: %c\n", upper);
    return 0;
}
