#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Ingresa una letra: ");
    scanf(" %c", &c);
    char lower = tolower(c);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Es una vocal.\n");
        } else {
            printf("Es una consonante.\n");
        }
    return 0;
}