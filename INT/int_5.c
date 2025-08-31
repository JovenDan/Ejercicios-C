#include <stdio.h>
#include <conio.h>

int main() {
    printf("Presione cualquier tecla para comenzar la cuenta ascendente...");
    getch();
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }
    return 0;
}